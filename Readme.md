[![Build Status](https://travis-ci.org/rezaneo7/pam8403.svg?branch=master)](https://travis-ci.org/rezaneo7/pam8403)

* The script in tools folder provides an example of generating audio tables from `.wav` files.
 just put the .wav file in tools folder and run script

* In this example, the `wav` file must be in 16k/16bit mono format.
  you can use audacity for converting.

* The script will bundle the `wav` files into a single table named `audio_example_file.h`.
  it will be created in tools folder.

* Since the ADC can only play 8-bit data, the script will scale each 16-bit value to a 8-bit value.
  in function "example_i2s_adc_data_scale"

* The script will covert all signed values into unsigned values because only positive values will be output by the ADC.



*we can use this code to record sound from adc of esp32 and then plat it back by dac.
   just set these flags "RECORD_IN_FLASH_EN" && "REPLAY_FROM_FLASH_EN"

* first we should convert it to rate 16000, then convert it from stereo to mono

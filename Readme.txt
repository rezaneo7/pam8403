* The script in python provides an example of generating audio tables from `.wav` files.
 just put the .wav file in tools folder and run script

* In this example, the `wav` file must be in 16k/16bit mono format.
  you can use audacity for converting.

* The script will bundle the `wav` files into a single table named `audio_example_file.h`.
  it will be created in tools folder.

* Since the ADC can only play 8-bit data, the script will scale each 16-bit value to a 8-bit value.
  in function "example_i2s_adc_data_scale"

* The script will covert all signed values into unsigned values because only positive values will be output by the ADC.
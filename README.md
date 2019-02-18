# Granular-augmentation-model

This repository contains protocols for simulating anaerobic granule formation and augmentation of the granule with new bacterial species. Results and conditions for each simulation scenario are provided. 

Simulations performed on a [modified iDynoMICs](https://github.com/adoloman/Modified-iDynoMICs-for-augmentation-model) version 

Each scenario folder has the following structure: 
- folder "protocol": contains simulation protocol as an .xml file with parameters for iDynoMICs
- folder "results": contains simulation output files and folders 
- folder "render": contains a video-file of granule formation process. The video is a render of .pov sequence files generated during simulation 
- file README.md : contains general description of the simulated scenario 

To run any of the simulation protocols on your own machine:  

1. Download and unpack a [modified iDynoMICs](https://github.com/adoloman/Modified-iDynoMICs-for-augmentation-model) version on your machine (preferrably to the root of disk drive);
2. Import the unpacked folder as a project in your IDE ([Eclipse IDE for Java Developers](https://www.eclipse.org/downloads/packages/release/2018-12/r/eclipse-ide-java-developers), [IntelliJ IDEA](https://www.jetbrains.com/idea/download/));
3. Navigate to unpacked folder of iDynoMICs and find folder "protocols" in it
4. Copy the .xml file from "protocol" folder of the "ScenarioX" folder in this repository to previously found "protocols";
5. Speciffy the path to the copied .xml-file in 'iDynoMICs_folder'\src\SearchEngine\Constants.java
6. Run the simulation


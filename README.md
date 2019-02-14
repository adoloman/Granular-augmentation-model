# Granular-augmentation-model

This repository contains protocols for simulating anaerobic granule formation and augmentation of the granule with new bacterial species. Results and conditions for each simulation scenario are provided. 

Simulations performed on a [modified iDynoMICs](https://github.com/amiteshmahajan/A_model_for_Bioaugmented_Anaerobic) version 

Each scenario folder has the following structure: 
- folder "protocol": contains simulation protocol as an .xml file with parameters for iDynoMICs
- folder "results": contains simulation output files and folders 
- folder "render": contains a video-file of granule formation process. The video is a render of .pov sequence files generated during simulation 
- file README.md : contains general description of the simulated scenario 

Для воспроизаедения симкляции скопируйте протор соответствуюзего сценария в папку .... idynamics и запустите

1. Загрузите и распакуйте модифицированную версию iDynamics [ссылка на репозиторий Амитеша!] на свой комп
2. Настройте скопированую папку как проект в вашей среде разработки (Eclipse, JetBrains IntelliJI)
3. Из папки protocol интересующего вас сценария скопируйте xml файл в папку protocols  внутри папки iDynamics
4. Запустите симуляцию 
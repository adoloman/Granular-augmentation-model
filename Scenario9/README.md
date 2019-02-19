Scenario 9 simulates a development of an augmented anaerobic granule on cellobiose feed (1.5 g/L).

This scenario introduces previously ommited microorganim (agent type) after 408 hours of internal simulation. 

Microorganims involved are:
- **Clostridium1** - converts cellobiose into lactate, acetate and ethanol;
- **Clostridium2** - converts lactate into acetate;
- **Desulfovibrio** - converts ethanol into acetate and hydrogen;
- **Methanogen1** - converts acetate into methane;
- **Methanogen2** - converts hydrogen into methane;
- **OleateDegrader** - converts oleate into acetate.

To restart the previous run (basic Scenario 3 ran until 408 hrs), set the `restartPreviousRun` to `true`:
> ` <simulator> `

> ` <param name="restartPreviousRun">true</param>`
    
You will also need to supply all the output files from the previous run into the `protocol` folder of your local iDynoMICs.

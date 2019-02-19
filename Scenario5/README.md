Scenario 5 simulates a development of an augmented anaerobic granule on cellobiose and oleate feed (1.5 g/L both). 
It is almost completely identical to scenario 4, but does not have a maximumThickness parameter: 
> `<param name="maxTh" unit="um">500</param>`

This scenario also introduces new microorganim (agent type) after 408 hours of internal simulation.
Microorganims involved are:
- **Clostridium1** - converts cellobiose into lactate, acetate and ethanol;
- **Clostridium2** - converts lactate into acetate;
- **Desulfovibrio** - converts ethanol into acetate and hydrogen;
- **Methanogen1** - converts acetate into methane;
- **Methanogen2** - converts hydrogen into methane;
- **OleateDegrader** - converts oleate into acetate.

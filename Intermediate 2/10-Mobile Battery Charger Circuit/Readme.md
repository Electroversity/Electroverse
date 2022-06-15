<h1>Mobile Battery Charger Circuit</h1>

<div align=center>
<img src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/10-Mobile%20Battery%20Charger%20Circuit/figure.drawio.png" />

  
|  | Realistic Applications |  |
| --- | --- | --- |
| Input: 100-270V, 0.5A and 50/60Hz | **Mobile** | Output: 5v and 2A |
| Input: 100-240V, 1.2A and 50-60Hz | **Laptop** | Output: 20V and 2.25A |

>Note: AC to DC Conversion takes place
  
<img src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/10-Mobile%20Battery%20Charger%20Circuit/figure2.drawio.png" />

</div>

In order to **deep dive in depth**, a very nice explanation has been given <a href="https://www.youtube.com/watch?v=DWY3-LjNQH4"> Here[youtube] </a>

  <p>Have Fun !</p>
  
  <h3>Proteus Components Required</h3>
  <ol>
    <li>1x Diode: 1N4007(Si Rectifier Diode)</li>
    <li>1x CAP-ELEC: Electrolytic Capacitor</li>
    <li>Sine wave AC Voltage source</li>
    <li>1x Resistor</li>
    <li>1x TRAN-2P25: Transformer</li>
  </ol>

<hr>

<h2>Step Down Transformer</h2>

| Circuit | Output |
| --- | --- |
| <img src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/10-Mobile%20Battery%20Charger%20Circuit/circuit%20diagrams/circuit1.png"> | <img src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/10-Mobile%20Battery%20Charger%20Circuit/circuit%20diagrams/output1.png"> |
| **Main Proteus File** | <a href="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/10-Mobile%20Battery%20Charger%20Circuit/Proteus/MobileCharger.pdsprj">File</a> |

>Note: In order to view the output on Digital Oscilloscope ➡ Once simulation starts you can view it under **Debug** ➡ **Digital Oscilloscope**

<hr>

<h2>Full Wave Rectification (Bridge Rectifier)</h2>

| Circuit | Output |
| --- | --- |
| <img src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/10-Mobile%20Battery%20Charger%20Circuit/circuit%20diagrams/circuit2.png"> | <img src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/10-Mobile%20Battery%20Charger%20Circuit/circuit%20diagrams/output2.png"> |
| <img src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/10-Mobile%20Battery%20Charger%20Circuit/circuit%20diagrams/circuit2_b.png"> | <img src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/10-Mobile%20Battery%20Charger%20Circuit/circuit%20diagrams/output2_b.png"> |
| **Main Proteus File** | <a href="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/10-Mobile%20Battery%20Charger%20Circuit/Proteus/fullbridgerectification.pdsprj">File</a> |

>Note: In order to view the output on Digital Oscilloscope ➡ Once simulation starts you can view it under **Debug** ➡ **Digital Oscilloscope**

<hr>

<h2>Capacitive Filtering</h2>

| Circuit | Output |
| --- | --- |
| <img src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/10-Mobile%20Battery%20Charger%20Circuit/circuit%20diagrams/circuit3.png"> | <img src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/10-Mobile%20Battery%20Charger%20Circuit/circuit%20diagrams/output3.png"> |
| **Main Proteus File** | <a href="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/10-Mobile%20Battery%20Charger%20Circuit/Proteus/CapacitiveFiltering.pdsprj">File</a> |

>Note: In order to view the output on Digital Oscilloscope ➡ Once simulation starts you can view it under **Debug** ➡ **Digital Oscilloscope**

<hr>

<h2>IC LM7085 Voltage Regulation</h2>

| Circuit | Output |
| --- | --- |
| <img src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/10-Mobile%20Battery%20Charger%20Circuit/circuit%20diagrams/circuit4.png"> | <img src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/10-Mobile%20Battery%20Charger%20Circuit/circuit%20diagrams/output4.png"> |
| **Main Proteus File** | <a href="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/10-Mobile%20Battery%20Charger%20Circuit/Proteus/LM7085regulation.pdsprj">File</a> |

>Note: In order to view the output on Digital Oscilloscope ➡ Once simulation starts you can view it under **Debug** ➡ **Digital Oscilloscope**

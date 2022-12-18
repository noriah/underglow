### overview
| Voltage    | Light Strips      | LEDs             | Microcontroller |                  | Buck Converter |
| ---------- | ----------------- | ---------------- | --------------- | ---------------- | -------------- |
| **Source** | **Amps/Package**  | **Amp Constant** | **Voltage**     | **Control Amps** | **Max Watts**  |
| 12         | 0.06              | 0.05             | 3.3             | 0.4              | 100            |
| **System** | **Package/Meter** | **# in System**  | **Amps**        | **Amp Buffer**   | **Efficiency** |
| 5          | 30                | 6                | 0.1             | 2                | 95%            |
|            | **Amps/Meter**    | **Total Amps**   |                 | **System Amps**  |                |
|            | 1.8               | 0.3              |                 | 2.4              |                |
|            | **Leach/Package** |                  |                 |                  |                |
|            | 0.0009            |                  |                 |                  |                |
|            | **Leach/Meter**   |                  |                 |                  |                |
|            | 0.027             |                  |                 |                  |                |

# Parts breakdown

| Part        | Voltage (V) | Max Current (A)  | Qty | Total Current (A) |
| ----------- | ----------- | ---------------- | --- | ----------------- |
| Teensy 4.1  | 3.3         | 0.1              | 1   | 0.1               |
| LTC1155IN   | 5.0         | 0.000085         | 2   | 0.00017           |
| SN65LBC172N | 5.0         | 0.007            | 2   | 0.014             |
| NEO-6M      | 3.3         | 0.067            | 1   | 0.067             |
| HC-05       | 3.3         | 0.1              | 1   | 0.1               |
| TEMT6000    | 3.3         | 0.02             | 1   | 0.02              |
| TJA1050     | 5.0         | 0.075            | 2   | 0.15              |
| DotStar     | 5.0         | 0.06             | 228 | 13.68             |
| LED         | 5.0         | 0.025 (estimate) | 2   | 0.05              |


*lengths are currently estimations. will not be over 2 meters per strip*
### breakdown by strip
| Section   | Meters | Strip Amps | Light Count |
| --------- | ------ | ---------- | ----------- |
| Front     | 2      | 3.60       | 60          |
| Back      | 2      | 3.60       | 60          |
| Left      | 1.8    | 3.24       | 54          |
| Right     | 1.8    | 3.24       | 54          |
|           |        |            |             |
| **Total** | 7.6    | 13.68      | 228         |

### system totals
| Total Amps | Total Watts | Input Amps | Battery Amps | Leach Amps |
| ---------- | ----------- | ---------- | ------------ | ---------- |
| 16.08      | 80.4        | 6.700      | 7.035        | 0.2052     |

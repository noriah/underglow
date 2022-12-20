# Power Calculations

### parts breakdown

| Part        | Voltage (V) | Max Current (A)  | Qty       | Total Current (A) | Total Watts (W) |
| ----------- | ----------- | ---------------- | --------- | ----------------- | --------------- |
| Teensy 4.1  | 3.3         | 0.1              | 1         | 0.1               | 0.33            |
| SN65LBC172N | 5.0         | 0.075            | 2         | 0.15              | 0.75            |
| SN65LBC175N | 5.0         | 0.01             | 4         | 0.04              | 0.2             |
| SN74AHC125  | 5.0         | 0.05             | 2         | 0.1               | 0.5             |
| SN65LBC172N | 5.0         | 0.007            | 2         | 0.014             | 0.07            |
| LTC1155IN   | 5.0         | 0.000085         | 2         | 0.00017           | 0.00085         |
| NEO-6M      | 3.3         | 0.067            | 1         | 0.067             | 0.2211          |
| HC-05       | 3.3         | 0.1              | 1         | 0.1               | 0.33            |
| TEMT6000    | 3.3         | 0.02             | 1         | 0.02              | 0.066           |
| TJA1050     | 5.0         | 0.075            | 2         | 0.15              | 0.75            |
| LED         | 5.0         | 0.025 (estimate) | 2         | 0.05              | 0.25            |
| DotStar     | 5.0         | 0.06 (package)   | 228       | 13.68             | 68.4            |
|             |             |                  |           |                   |                 |
|             |             |                  | **Total** | 14.471            | 71.878          |


### breakdown by strip
*lengths are currently estimations. will not be over 2 meters per strip*

The chosen DotStar lights use the SK9822 LED package.
- 20mA per channel per package.
- 60mA per package.
- 30 packages per meter
- 1.8A total current/meter
- 0.9mA leach per package
- 27ma leach per meter

| Section   | Meters | Strip Current | Light Count |
| --------- | ------ | ------------- | ----------- |
| Front     | 2      | 3.60          | 60          |
| Back      | 2      | 3.60          | 60          |
| Left      | 1.8    | 3.24          | 54          |
| Right     | 1.8    | 3.24          | 54          |
|           |        |               |             |
| **Total** | 7.6    | 13.68         | 228         |


### system totals

- **Total Current**: 14.471A
- **Total Watts**: 71.878W
- **Buffered Current**: 16A
- **Buffered Watts**: 80W
- **Buck Converter Efficiency**: 95%
- **Battery Current**: 7A

**NOTE**: This is the maximum current. The average current should be much less.

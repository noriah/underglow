# Parts

## Basic Requirements
- Minimum operating temperature should be lower than the expected operating environment
  - Most parts here work from -40C to +85C
  - Parts that live inside the cabin can have less extreme temperatures.

## Components List

| Part          | Type        | Description                         | Datasheet                       | Store                 | Unit Cost  | Qty       | Cost    |
| ------------- | ----------- | ----------------------------------- | ------------------------------- | --------------------- | ---------- | --------- | ------- |
| Teensy 4.1    | MicroCntrlr | ARM Cortex-M7 at 600 MHz MC         | [iMX RT1060 (PJRC)][teensy41]   | [PJRC][teensy41s]     | $31.50     | 1         | $31.50  |
| SN65LBC172N   | IC          | RS-422/RS-485 Quad LP Diff Driver   | [SN65LBC172 (TI)][sn65lbc172]   | [Mouser][sn65lbc172s] | $8.28      | 2         | $16.56  |
| SN65LBC175N   | IC          | RS-422/RS-485 Quad LP Diff Receiver | [SN65LBC175 (TI)][sn65lbc175]   | [Mouser][sn65lbc175s] | $6.22      | 4         | $24.88  |
| SN74AHC125    | IC          | Quad Bus Buffer Gate CMOS           | [SNx4AHC125 (TI)][sn74ahc125]   | [Mouser][sn74ahc125s] | $0.64      | 2         | $1.28   |
| LTC1155IN8    | IC          | Dual High Side Gate Driver          | [LTC1155 (Analog)][ltc1155]     | [Mouser][ltc1155s]    | $12.49     | 2         | $24.98  |
| FQP30N06      | IC          | 32A 60V N-Channel MOSFET            | [FQP30N06L (Mouser)][fqp30n06l] | [Mouser][fqp30n06ls]  | $1.97      | 4         | $7.88   |
| DotStar Strip | LED Strip   | Black 30 LED/meter LED Strip        | [SK9822 (Adafruit)][sk9822]     | [Adafruit][dotstars]  | $99.75     | 2         | $199.50 |
| TEMT6000      | Sensor      | Ambient Light Sensor                | [TEMT6000 (Sparkfun)][temt6000] | [Amazon][temt6000s]   | $7.99 (3x) | 1         | $7.99   |
| TJA1050       | Module      | High Speed CAN transceiver          | [TJA1050 (NXP)][tja1050]        | [Amazon][tja1050s]    | $8.99 (5x) | 2         | $8.99   |
| HC-05         | Module      | Bluetooth Module                    | [BC417 (Sparkfun)][bc417]       | [Amazon][hc-05s]      | $9.99      | 1         | $9.99   |
| NEO-6M        | Module      | GPS Module                          | [NEO-6 (Mouser)][neo-6]         | [Amazon][neo-6s]      | $11.99     | 1         | $11.99  |
| GPS Antenna   | Component   | GPS Antenna                         |                                 | [Amazon][gps-ants]    | $10.99     | 1         | $10.99  |
| Buck Reg      | Component   | Buck Converter 12V to 5V20A 100W    |                                 | [Amazon][bucks]       | $15.99     | 1         | $15.99  |
|               |             |                                     |                                 |                       |            |           |         |
|               |             |                                     |                                 |                       |            | **Total** | $372.52 |


## Wiring List

**NOTICE**: These lengths are very generous and meant to cover most cars.
Taking measurements beforehand can greatly reduce the amount you purchase and
your overall cost.

| Max Current (A) | AWG  | Conductors | Length | Purpose                            | Store              | Unit Cost | Qty       | Cost   |
| --------------- | ---- | ---------- | ------ | ---------------------------------- | ------------------ | --------- | --------- | ------ |
| 16              | 16   | 2          | 10ft   | Main Power Hookup                  | [Amazon][16awg2cs] | $9.99     | 1         | $9.99  |
| 4               | 20   | 2          | 100ft  | LED Strip Power                    | [Amazon][20awg2cs] | $16.99    | 1         | $16.99 |
| 0.2             | 28   | 6          | 25ft   | Cabin Button/LED / GPS / Bluetooth | [Amazon][28awg6cs] | $13.99    | 1         | $13.99 |
| 0.2             | Cat6 | 8          | 250ft  | LED Strip Data / Other Hookup      | [Amazon][cat6s]    | $39.99    | 1         | $39.99 |
|                 |      |            |        |                                    |                    |           | **Total** | $80.96 |


<!-- Datasheets -->
[teensy41]: https://www.pjrc.com/teensy/IMXRT1060CEC_rev0_1.pdf

[sn65lbc172]: https://www.ti.com/lit/ds/symlink/sn75lbc172.pdf
[sn65lbc175]: https://www.ti.com/lit/ds/symlink/sn75lbc175.pdf
[sn74ahc125]: https://www.ti.com/lit/ds/symlink/sn74ahc125.pdf

[ltc1155]: https://www.analog.com/media/en/technical-documentation/data-sheets/LTC1155.pdf
[fqp30n06l]: https://www.mouser.com/datasheet/2/308/1/FQP30N06L_D-1809681.pdf

[sk9822]: https://cdn-shop.adafruit.com/product-files/2237/SK9822+LED+Datasheet.pdf

[temt6000]: https://www.sparkfun.com/datasheets/Sensors/Imaging/TEMT6000.pdf

[tja1050]: https://www.nxp.com/docs/en/data-sheet/TJA1050.pdf

[bc417]: https://cdn.sparkfun.com/datasheets/Wireless/Bluetooth/CSR-BC417-datasheet.pdf

[neo-6]: https://www.mouser.com/datasheet/2/1025/NEO_6_DataSheet__GPS_G6_HW_09005_-2010081.pdf

<!-- Store Links -->
[teensy41s]: https://www.pjrc.com/store/teensy41.html

[sn65lbc172s]: https://mou.sr/3uXGd9t
[sn65lbc175s]: https://mou.sr/3W8jOCe
[sn74ahc125s]: https://mou.sr/3Wmwjtw

[ltc1155s]: https://mou.sr/3WtqoDe
[fqp30n06ls]: https://mou.sr/3YwUS92

[dotstars]: https://www.adafruit.com/product/2237?length=5

[temt6000s]: https://www.amazon.com/gp/product/B07WDW9BHD

[tja1050s]: https://www.amazon.com/gp/product/B07W4VZ2F2

[hc-05s]: https://www.amazon.com/gp/product/B01G9KSAF6

[neo-6s]: https://www.amazon.com/gp/product/B07P8YMVNT
[gps-ants]: https://www.amazon.com/gp/product/B083D59N55

[bucks]: https://www.amazon.com/gp/product/B089M5R3NJ


<!-- Wiring Store Links -->
[28awg6cs]: https://www.amazon.com/gp/product/B08X9Y6DQR
[16awg2cs]: https://www.amazon.com/gp/product/B0746HRVZP
[20awg2cs]: https://www.amazon.com/gp/product/B07SJ44SN1
[cat6s]: https://www.amazon.com/gp/product/B0BCTYR3HY

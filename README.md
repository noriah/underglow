# LED underglow

Car LED underglow project

- [Parts List](/docs/parts.md)
- [Power Calculations](/docs/calculations.md)

## planned features
- cabin control/indication
  - system power / state
  - cycle configuration
- animations
  - forward/backward rainbow
  - pulse
  - startup
  - ???
- state aware animations
  - data from CAN bus
    - gear position (1-6, R)
    - speed
    - blinkers
    - doors
- location aware light control
  - limit colors used/available depending on location
  - obey state/local laws (US for now) regarding what colors can/should/must be used on front/back/sides
- brightness aided by light sensor
- bluetooth configuration
  - enable use of mobile devices to update color schemes/patterns
  - read voltage/current

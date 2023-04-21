# Versions
---
#### 2.0.1
 - Finished CAL library with dash and MoTec ID's

#### 2.1.0
 - Send data into ECU over MoTec base ID
 - Introduce MoTec CAN + Offset data types

#### 2.1.1
 - Fix all errors that came up when integrating `CAL 2.1.0` with the `st-f4can` library
    - `CAN0` and `CAN1` were originally CAN data types, but were also defined as macros within the `st-f4can` library. To fix the issue they were renamed to `ECU_CAN0` and `ECU_CAN1` respectively. The others (`CAN2` to `CAN7`) were also renamed accordingly.
    - `data_dash.hpp` was removed as the data types cannot exist on the ECU without M1 Build
    - 16 bit encoding and decoding was fixed
        - decoding looks fine
        - encoding was set up as `start_idx - 1` where it should have been `start_idx + 1`
    - `DATA_ECU` changed to `DATA_ECU_RECV` to differentiate data types
#### 2.1.2
 - Fix ECU1, ECU2, PDM1, PDM2 reading from ECU1

#### 2.1.3
 - Removed Throttle Body Current, Replaced with Gear Position Voltage
#### 2.1.4
 - Added Starter relay status and PDM total current
 - reworked most of PDM config
 - reworked PDM `status` messages
 - PDM2 CAN message is now entirely output statuses that can be sent at a low refresh rate
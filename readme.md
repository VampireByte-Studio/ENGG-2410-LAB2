# Lab 2 – Fire Panel Priority Encoder

**Course:** ENGG*2410   **Group:** 64
**Project:** lab_firepanel_group64

## Files
- panel_encoder.sch  – schematic 
- firepanel_constraints.ucf  – constraints file 
- README.md

## Switch assignments (inputs)
| Signal | Meaning              | Switch |
|--------|----------------------|--------|
| Z3     | Server room          | SW3    |
| Z2     | Teaching labs        | SW2    |
| Z1     | Offices              | SW1    |
| Z0     | Basement plant room  | SW0    |

Switch up = zone in alarm (active high).

## LED assignments (outputs)
| Signal | Meaning                    | LED |
|--------|----------------------------|-----|
| C1     | Zone code                  | LD2 |
| C0     | Zone code                  | LD1 |
| VALID  | At least one zone in alarm | LD0 |

## Assumption
When no zone is in alarm, C1 = C0 = 0. The display must ignore the code
whenever VALID = 0.

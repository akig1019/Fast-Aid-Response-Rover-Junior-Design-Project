# Fast-Aid-Response-Rover-Junior-Design-Project
The FARR delivers remote first aid to victims. Controlled via GPS, a camera, and real-time communication, its robotic arm applies tourniquets while a sprayer dispenses blood-clotting agents. The current prototype focuses solely on movement and core functionality, with future plans for autonomous, multi-rover deployments.

## Background Information
Mass casualty incidents can overwhelm first responders during emergencies with the excessive amount of hazards or threats, presenting a delay in immediately reaching victims. Current response methods rely almost exclusively on human-led entry, which not only increases risk to personnel but creates a deadly gap in care for casualties trapped in no-go zones.

The First Aid Response Rover (FARR) addresses this gap by providing a remotely operated system designed to deliver immediate medical aid before responders can safely access
the scene. By navigating hazardous terrain to deploy essential supplies such as tourniquets and hemostatic agents, FARR enables victims or bystanders to initiate self-aid during the most time-sensitive moments of an emergency.

## Features
### Robotic Arm Movement
* Multi-directional movement
* Claw attachment for applying tourniquets
* Designed for precise positioning and control

### Medical Sprayer System
* Dispenses blood-clotting agent
* Helps control bleeding before responders arrive to increase survival chances.

## Building & Design Process
The rover is designed using CAD modeling and manufactured using 3D printing for precision components. The system is assembled by integrating mechanical 3D structures like pin
joints and a rail mounting system for our baseplates. The electronic systems and softwarecontrols are controlled through the use of several Elegoo control boards. Each subsystem has its own board, meaning there is independent control of each servo motor or device. This is fine for a prototype, but a future product should have each subsystem integrated into one control center (i.e. remote control).

## How It Works
The rover currently operates on three 9V batteries, as the prototype struggled with electrical and programming streamlining, but it could theoretically use a single 12V battery with a capacity of approximately 6.3 Ah, allowing an estimated runtime of 3 hours under full-load conditions.

## Recommended Next Steps
In the future, we hope to update this deisgn by implementing:
* A remote control system allow first responders to control the rover remotely, ensuring the safety of the first responder while still allowing them to do their job.
* Camera and audio capabilities to allow for real-time communication between the first responder and victim.
* A GPS and tracking system that would allow the operator to have the precise geographic location of the rover at all times.

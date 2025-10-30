# Overview<br>

## Principles<br>
- Simplicity over complexity;<br>
- Liskov substitution;<br>
- Single responsibility;<br>
- Balance between abstraction and control;<br>


## Main modules<br>
## Core<br>
Provides a game loop with fixed-time-step.<br>
```on_ready```'s logic is triggered when game ```run``` method is called.<br>
```on_update```'s logic is the logic that compute and updates values.<br>
```on_input```'s logic is the logic that compute inputs.<br>
```on_render```'s logic is the logic that render things.<br>


## I/O - How engine manage files<br>

## Features roadmap<br>
1. ECS
   - [ ] Entity Manager
   - [ ] Entity
   - [ ] Component
2. Fixed time-step<br>
    - [x] Variable frame-time<br>
    - [x] Accumulator, update<br>
    - [ ] States
    - [ ] Input<br>
    - [ ] Render<br>
3. Rendering
    - [ ] Color & alpha manipulation<br>
    - [ ] Simple geometry (rectangles, circles, wedges, polygons)<br>
    - [ ] Sprites<br>
    - [ ] Layers<br>
    - [ ] Blend modes<br>
    - [ ] Tilemap<br>
    - [ ] Abstract everything into a rendering module<br>
4. Maths and Physics<br>
    - [ ] Vector2, Rect, Matrix<br>
    - [ ] Vector3 for Z-index<br>
    - [ ] AABB collisions<br>
    - [ ] OBB collisions<br>
    - [ ] Circle collisions<br>
    - [ ] Convex and concave polygon collisions<br>
    - [ ] Abstract collisions into a collision module<br>
5. Simple sound playback<br>
# PathFinder

Pathfinder is a program that searches for the shortest route between two points.

## Usage:

### Compiling and running program:

```
make or make pathfinder
./pathfinder <name of file>
```

### Uninstallation:

```
make uninstall
```

### Reinstallation (uninstall and install pathfinder):

```
make reinstall
./pathfinder <name of file>
```

## Implementation:

- Floyd-Warshall algorithm to find all pair shortest distance in a weighted directed graph
- backtracking algorithm to find all optimal shortest routes (incl. different routes with identical distance)

# State
The `State` class should encapsulate a `lua_State` and handle the details of the lua stack.

## Use cases
### Initialize an empty lua state
To initialize an empty lua state:
```
lp::State state;
```

### Loading a chunk from a file
To load a chunk from a `.lua` file, the following methods should be possible
```
lp::State state;
state.load("path/to/file.lua");
```

### Execute a lua function
```
lp::State state1;
state.call("functionname", )
```
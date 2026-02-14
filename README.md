## Computer Graphics and Visualization Project

Authors:
1. Subhrajyoti Sen
2. Steve Jerold

### Run locally on macOS

1. Install Xcode Command Line Tools (if not already installed):
   `xcode-select --install`
2. Build from project root:
   `make`
3. Run:
   `make run`

Notes:
- The app opens in fullscreen.
- Planet narration audio uses `afplay` on macOS.
- Audio `.wav` files are already included in `audio/`, so `sounds.sh` is optional.

### Linux (original setup)

```bash
sh sounds.sh
cd src
make
./solarsystem
```

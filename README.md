# 🏎️💨 F1 Reaction Time Test — README
## 🏁 Game Idea

This game recreates the iconic F1 race start lights experience in a simple C console.
Just like real drivers wait for the lights to go out, you must react the moment the GREEN light flashes.

Your task:
👉 **Press ENTER as fast as possible when the green signal appears.**
Each race start tests your reflexes under pressure — exactly like an F1 driver on the grid.

## 🚦 Rules

1. Five red lights appear on the grid:
🔴 🔴 🔴 🔴 🔴

2. Lights stay ON for a **random duration** (2–5 seconds), simulating real FIA start unpredictability.

3. As soon as the lights switch to 🟢 **GREEN**, press **ENTER**.

4. Your reaction time is measured in **milliseconds**.

5. If you react **below 100ms**, it’s considered a **JUMP START** (humanly impossible reflex).

- The round will still be shown

- But it won’t be included in fastest or average timing

6. A total of 5 race starts (5 rounds) are played.

7. Final result includes:

- 🏎️ **Fastest valid reaction time**

- ⏱️ **Average reaction time** (only valid rounds)

- 🚫 Count of jump-start rounds

- 💬 Round-by-round performance comments

## 🎮 Controls

Only **one control** in the entire game:

👉 **Press ENTER**

- To start the game

- To react to the green light

- To move to the next round

This keeps the game simple and accessible to beginners.

## ⭐ Features

- F1-themed start light sequence

- Random delay system (like real FIA race starts)

- Reaction timing using clock()

- Jump-start detection (<100ms)

- Rounds still displayed even if jump start happens

- Fastest & average ignore jump-starts (fair timing)

- Performance comments after every round

- UTF-8 emoji support for race visuals

- Clean console UI

## 🚥Output Example

ROUND 3 / 5
🔴 🔴 🔴 🔴 🔴

🟢 GO! GO! GO!

Your Reaction Time: *98 ms*  
Status: **JUMP START** 🚫 (Not counted in fastest/average)

Press ENTER for the next start...

ROUND 4 / 5
🔵 Reaction Time: *190 ms*  
**Crazy Reflex blud**⚡

## 🧑‍🔧 Tech Used

- C Programming

- clock() for timing

- Sleep() for delay

- rand() for unpredictability

- Windows console (UTF-8)

## 🏎️ F1-Themed Touches

- Grid light sequence modeled after real formula starts

- Randomized “lights out” timing replicates pre-race tension

- Reaction ratings feel like race engineer radio messages

- Jump-start system mimics false-start rules

- End results feel like driver timing sheets

## 🏆 Conclusion

This project mixes simple C programming concepts with the thrill of a real F1 race start.
It’s a beginner-level game that’s easy to understand but exciting to play.
**Lights out and away we go! 🟢💨**

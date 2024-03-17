# Summary:

<p> Character's have several functions that dictate their behaviour in the world from normal movement and exploration to battle mode and stat functionality during battle.<br>

### Health:
<p>
Character's that are living in the battle sytem contain stats like health and spirit points. This goes for enemies, as well as Mio and Mayu. Max Health changes based on the game's difficulty mode for Mio and Mayu.
</p>
<details>
<summary>List of Mio's max health per difficulty</summary>

```cpp
  /// Mio's Stats per game difficulty.
  /// Note that there's 4 difficulties starting at 0, 3 being the hardest
  if (ingame_wrk.mDifficulty.mValue == 1) {
    plyr_wrk.cmn_wrk.st.hpmax = 10000;
  }
  if (ingame_wrk.mDifficulty.mValue < 2) {
    if (ingame_wrk.mDifficulty.mValue == 0) {
      plyr_wrk.cmn_wrk.st.hpmax = 20000;
    }
  }
  else {
    if (ingame_wrk.mDifficulty.mValue == 2) {
      plyr_wrk.cmn_wrk.st.hpmax = 7000;
    }
    if (ingame_wrk.mDifficulty.mValue == 3) {
      plyr_wrk.cmn_wrk.st.hpmax = 4000;
    }
  }
  plyr_wrk.cmn_wrk.st.hpmax = 10000;
```
</details>

<details>
<summary> List of Mayu's max health per difficulty </summary>

```cpp
/// Mayu's stats differ from Mio's an amount
  if (ingame_wrk.mDifficulty.mValue == 1) {
    sis_wrk.cmn_wrk.st.hpmax = 10000;
    goto LAB_0025be6c;
  }
  if (ingame_wrk.mDifficulty.mValue < 2) {
    if (ingame_wrk.mDifficulty.mValue == 0) {
                    /* end of inlined section */
      sis_wrk.cmn_wrk.st.hpmax = 15000;
      goto LAB_0025be6c;
    }
  }
  else {
    if (ingame_wrk.mDifficulty.mValue == 2) {
      sis_wrk.cmn_wrk.st.hpmax = 7000;
      goto LAB_0025be6c;
    }
    if (ingame_wrk.mDifficulty.mValue == 3) {
      sis_wrk.cmn_wrk.st.hpmax = 5000;
      goto LAB_0025be6c;
    }
  }
  sis_wrk.cmn_wrk.st.hpmax = 10000
```
</details>

### Stat Functions:

<p>Health for the health bar display is calculated in percentages alike so:</p>
<details>
<summary> Health percentage functions </summary>

```cpp
void SyncHpBar()
{
  disp_hp_per = PlayerGetNowHPPercentage();
}
```

```cpp
float PlayerGetNowHPPercentage()
{
  // Though oddly symbols suggest these are short's so I wonder if there's any precesion errors that can happen in here?
  return (float)(plyr_wrk.cmn_wrk.st.hp / plyr_wrk.cmn_wrk.st.hpmax);
}
```
</details>
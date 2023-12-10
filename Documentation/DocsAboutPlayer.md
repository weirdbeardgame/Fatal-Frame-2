### Player_Wrk:
- **G3DLIGHT fl;**
- **G3DLIGHT fl2;**
- **G3DLIGHT reflectionlight**
<p>All of the above are for lighting effects and data related to the player.<br>

- **SND_3D_SET s3d;** For positional audio effects.

- **PLCMN_WRK cmn_wrk;** <p>**Player Common:** This is required for any entity to be considered living. It contains the entites movebox, room info, stats, mode, info about the current attack, the enemies position, and info about the current floor. All living entities including Mayu have this in their structs. plyr_wrk, sister_wrk, ene_wrk, fly_wrk. It seems nessacary for attacks and for movement in the world space. </p>
  - **MOVE_BOX:** <p>A bounding box meant to adjust the players position in the world<br>
  - **STATUS_DAT:** <p>The living entites stats which contains items like hp, spirit points, amount of base damage delt etc.<br>
  - **PROOM_INFO:** <p>The active room info which includes the current area, room, camera and height of space though they misspelled it hight.<br>

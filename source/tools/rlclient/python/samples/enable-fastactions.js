var cmpPlayerManager = Engine.QueryInterface(SYSTEM_ENTITY, IID_PlayerManager);
var playerEnt = cmpPlayerManager.GetPlayerByID('1');
let cmpModifiersManager = Engine.QueryInterface(SYSTEM_ENTITY, IID_ModifiersManager);
cmpModifiersManager.AddModifiers("cheat/superfast", {
    "UnitMotion/WalkSpeed": [{ "affects": [["Cavalry"]], "multiply": 2.00 }],
}, playerEnt);

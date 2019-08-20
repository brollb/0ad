/**
 * Also called from the C++ side when ending the game.
 * The current page can be the summary screen or a message box, so it can't be moved to session/.
 */
function getReplayMetadata()
{
	let cmpGuiInterface = Engine.QueryInterface(SYSTEM_ENTITY, IID_GuiInterface);
	return cmpGuiInterface.GetReplayMetadata();
}

Engine.RegisterGlobal("getReplayMetadata", getReplayMetadata);

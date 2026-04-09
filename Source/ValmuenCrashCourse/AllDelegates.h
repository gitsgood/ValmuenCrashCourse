#pragma once




DECLARE_MULTICAST_DELEGATE_OneParam(FNumberSendToAllDelegate, float /*FloatNumber*/);

// DECLARE_MULTICAST_DELEGATE_OneParam(FNumberSendToAllDelegate, float /*FloatNumber*/);


inline FNumberSendToAllDelegate NumberSendToAllDelegate;
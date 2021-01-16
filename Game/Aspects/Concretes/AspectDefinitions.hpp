#pragma once
#include "AspectBase.hpp"
#include "AspectWeaver.hpp"
#include "CharacterConnectionsAspect.hpp"

#define CHAR_CONN_ASP(Concrete, Base, Data) AspectWeaver <Concrete<Base<Data,Data>, Data>, Data>

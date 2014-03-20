/*
This source file is part of KBEngine
For the latest info, see http://www.kbengine.org/

Copyright (c) 2008-2012 KBEngine.

KBEngine is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

KBEngine is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.
 
You should have received a copy of the GNU Lesser General Public License
along with KBEngine.  If not, see <http://www.gnu.org/licenses/>.
*/


namespace KBEngine{

//-------------------------------------------------------------------------------------
INLINE void RangeTriggerNode::range(float xz, float y)
{
	range_xz_ = xz;
	range_y_ = y;
}

//-------------------------------------------------------------------------------------
INLINE void RangeTriggerNode::old_range(float xz, float y)
{
	old_range_xz_ = xz;
	old_range_y_ = y;
}

//-------------------------------------------------------------------------------------
INLINE float RangeTriggerNode::range_xz()const
{
	return range_xz_;
}

//-------------------------------------------------------------------------------------
INLINE float RangeTriggerNode::range_y()const
{
	return range_y_;
}

//-------------------------------------------------------------------------------------
INLINE RangeTrigger* RangeTriggerNode::pRangeTrigger()const
{
	return pRangeTrigger_;
}

//-------------------------------------------------------------------------------------
INLINE void RangeTriggerNode::pRangeTrigger(RangeTrigger* pRangeTrigger)
{
	pRangeTrigger_ = pRangeTrigger;
}

//-------------------------------------------------------------------------------------
}

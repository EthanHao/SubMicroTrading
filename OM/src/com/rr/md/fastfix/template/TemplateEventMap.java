/*******************************************************************************
 * Copyright (c) 2015 Low Latency Trading Limited  :  Author Richard Rose
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at	http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing,  software distributed under the License 
 * is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and limitations under the License.
 *******************************************************************************/
package com.rr.md.fastfix.template;

import java.util.HashMap;
import java.util.Map;

import com.rr.core.model.Message;
import com.rr.model.generated.internal.events.interfaces.MDIncRefresh;
import com.rr.model.generated.internal.events.interfaces.MDSnapshotFullRefresh;
import com.rr.model.generated.internal.events.interfaces.SecurityDefinition;
import com.rr.model.generated.internal.events.interfaces.SecurityStatus;

/**
 * Due to the nature of transfer encoding we cant generate CODEC's
 *
 * @author Richard Rose
 */
public class TemplateEventMap {

    private final Map<String, Class<? extends Message>> _msgTypeToEventClass = new HashMap<String, Class<? extends Message>>();
    
    public TemplateEventMap() {
        _msgTypeToEventClass.put( "X", MDIncRefresh.class );
        _msgTypeToEventClass.put( "d", SecurityDefinition.class );
        _msgTypeToEventClass.put( "f", SecurityStatus.class );
        _msgTypeToEventClass.put( "W", MDSnapshotFullRefresh.class );
    }
    
    public Class<? extends Message> getFastFixEvent( final String msgType ) {
        return _msgTypeToEventClass.get( msgType );
    }
}

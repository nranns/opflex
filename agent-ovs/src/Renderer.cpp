/* -*- C++ -*-; c-basic-offset: 4; indent-tabs-mode: nil */
/*
 * Implementation for Renderer class
 *
 * Copyright (c) 2014 Cisco Systems, Inc. and others.  All rights reserved.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v1.0 which accompanies this distribution,
 * and is available at http://www.eclipse.org/legal/epl-v10.html
 */

#include "Renderer.h"

namespace ovsagent {


Renderer::Renderer(Agent& agent_) 
    : agent(agent_) {

}

Renderer::~Renderer() {
}

} /* namespace ovsagent */

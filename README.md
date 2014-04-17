ZeusPCG
=======

Procedural Content Generation plugin for Unreal Engine 4

Overview
--------

This plugin contains actors and objects to allow content to be generated automatically using the UE4 blueprint system.

It is agnostic to the kind of content being generated, although some of the algorithms will be specialised to certain tasks.

Concepts
--------

TODO: Generator - Contains all the main events/function/data for generating a single thing.
TODO: Scope - A subset of the thing being generated, which can be acted upon individually. All generated content has at least one master scope. Scopes can be assigned traits (arbitrary named data), which can include physical extents. Scopes are heiarchical and form a tree.
TODO: Nodes - Nodes are containded in scopes, often has a spatial position, and form a graph, possibly connected outside of their own scope. Nodes can be assigned traits (arbitrary named data), which can include a physical position.
TODO: Mutator - Takes a scope or node and immediately either alters its traits in some way or spawns in nodes/scopes from it.
TODO: Agent - Agents are like mutators but are designed to act iteratively and in parallel.

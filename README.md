# Kietemo

```text
 __   ___   __     _______  ___________  _______  ___      ___     ______    
|/"| /  ") |" \   /"     "|("     _   ")/"     "||"  \    /"  |   /    " \   
(: |/   /  ||  | (: ______) )__/  \\__/(: ______) \   \  //   |  // ____  \  
|    __/   |:  |  \/    |      \\_ /    \/    |   /\\  \/.    | /  /    ) :) 
(// _  \   |.  |  // ___)_     |.  |    // ___)_ |: \.        |(: (____/ //  
|: | \  \  /\  |\(:      "|    \:  |   (:      "||.  \    /:  | \        /   
(__|  \__)(__\_|_)\_______)     \__|    \_______)|___|\__/|___|  \"_____/    
```

## About

**Kietemo** is an experimental Unreal Engine project heavily inspired by my love for FPS and survival games, the combat and progression systems of games such as *Sekiro*, Japanese samurai manga such as *Vagabond* and *The Blade of the Immortal*, and Japanese folklore surrounding Yokai.

The project began during COVID as a personal attempt to combine these influences into a large-scale survival horror game.

Kietemo was originally developed in **Unreal Engine 4** and later ported to **Unreal Engine 5**. Development was eventually abandoned as the scope of the project grew beyond what my hardware and available time could support.

The original project also became difficult to recover due to Unreal Engine's rapid version changes and my limited understanding of source control at the time. The original GitHub history is therefore relatively sparse, and the project no longer builds cleanly in its original state.

Rather than treating the project as lost, I am revisiting it as a **technical revival**: reconstructing the systems that made the original project interesting, modernizing the implementation, and documenting what I learned from the original development process.

---

# The World of Kietemo

Kietemo takes place in **Yomi no Kuni**, a vast world inhabited by the dead.

At first glance, Yomi appears to be another world entirely separated from the living. In reality, however, the two worlds are deeply connected.

The population of the dead depends on the population of the living.

Souls are therefore treated as a resource.

A hierarchical and utilitarian government has emerged to regulate this resource. Its purpose is not to eliminate suffering, but to maintain a stable balance between the living and the dead.

They orchestrate tragedies and misfortunes to produce enough deaths to sustain Yomi, while carefully preventing those tragedies from destabilizing the population of the living.

In many ways, the system behaves less like a traditional government and more like a **massive trading firm**.

Human lives become supply.

Souls become currency.

And death becomes an economic instrument.

---

# The Yomi / Human Years Index

One of the core ideas behind the world is the **Yomi / Human Years Index**.

The index represents the relationship between the population and spiritual resources available to Yomi.

Different periods of the game can therefore have different levels of spiritual scarcity.

During periods where the index is low, souls become more valuable and spiritual starvation becomes significantly more dangerous.

This creates a dynamic relationship between the world's lore and its gameplay systems:

* The availability of souls affects survival.
* The world's conditions affect how much spiritual energy the player requires.
* Human deaths influence the balance of Yomi.
* Certain enemies exist specifically because of this system.
* The player is forced to participate in the same economy that governs the world.

The goal was to make the world's underlying economy more than just lore: it was intended to influence how the player actually survives.

---

# Factions & Enemies

## Humans

Humans possess what is considered **good spiritual energy**.

### Researchers

Researchers study and manipulate the world's underlying dynamics.

They are responsible for monitoring factors such as the Yomi / Human Years Index and determining how much spiritual energy is required to maintain Yomi.

Their work effectively controls the economy of the world.

Eliminating researchers can therefore have consequences beyond simply removing an enemy: the player is interfering with the mechanisms that maintain the world's balance.

### Traders

Traders are among the most powerful warriors who have lived throughout history.

After major tragedies are orchestrated and large numbers of souls become available, Traders are dispatched to hunt and retrieve those souls before they enter the wider spiritual economy.

They are effectively **hunters working for the soul market**.

Their combat ability reflects their origins as legendary warriors, making them some of the most dangerous human enemies in the game.

### Other Humans

Other inhabitants include newly arrived souls, criminals, outlaws, civilians, and individuals who have existed within Yomi for extended periods.

Not every human is necessarily aligned with the governing system.

---

# Yokai

Yokai represent **bad or corrupted spiritual energy**.

### Spiritually Decayed Humans

Humans who fail to consume enough spiritual energy gradually begin to decay.

As their spiritual starvation progresses, they become increasingly driven by the need to consume spiritual energy from others.

Eventually, they lose much of their humanity and become hostile, mindless creatures.

### Yokai

Yokai inhabit regions where spiritual corruption has become particularly severe.

Not all Yokai can be killed.

Some can be defeated through combat, while others exist more as environmental or supernatural threats.

The intention is for the player to gradually learn which entities can be fought, which should be avoided, and which rules of the world can be exploited.

---

# Gameplay

The player is one of the humans who has suffered one of the tragedies orchestrated by the system.

Instead of being collected like an ordinary soul, however, you survive.

Now you are being hunted.

Your objective is to survive long enough to discover a way out of Yomi.

The problem is that Yomi is effectively **infinite**.

There is no simple road to the exit.

The player must travel through multiple regions and dimensions, each with different populations, environmental conditions, and spiritual threats.

Some regions are heavily controlled by humans.

Others have been abandoned and are dominated by Yokai and unknown entities.

---

# Core Survival Systems

## Spiritual Starvation

The player requires spiritual energy to prevent their own decay.

This creates a constant survival pressure similar to hunger or thirst systems found in survival games, but tied directly to the game's supernatural economy.

The amount of spiritual energy required is influenced by the current state of the world.

The player therefore cannot simply collect a fixed amount of resources and consider themselves safe indefinitely.

---

## Exploration

The world was designed around the idea of an **infinite territory**.

Rather than constructing every region manually, procedural generation is used to create terrain and structures.

This allows exploration to become a core part of the survival experience.

The player does not necessarily know:

* where the next safe region is;
* where human settlements exist;
* where Yokai have accumulated;
* where valuable spiritual resources can be found;
* or how far they are from an eventual escape.

---

## Combat

Combat was heavily inspired by **Sekiro** and other timing-focused melee games.

The goal was to make fighting dangerous rather than simply reducing combat to health-bar management.

The original implementation was primarily developed using **Unreal Engine Blueprints**, with experimentation around responsive melee interactions, enemy behavior, and player combat states.

The intention was for different enemy classes to require different approaches rather than allowing one universal combat strategy.

---

# Engineering Highlights

## Procedural Terrain Generation

One of the primary technical systems is procedural world generation.

**Perlin noise** is used to generate terrain and influence the distribution of environmental features.

The original implementation was written in **C++** and was intended to support the generation of large, potentially continuous territories.

The system was experimented with for:

* terrain height generation;
* environmental variation;
* structure placement;
* regional differences;
* and creating the illusion of a much larger world from procedural rules.

This was one of my earliest experiments with procedural generation and eventually became one of the reasons I became interested in the technical side of game development.

---

## Unreal Engine / C++

The project combines **C++ and Unreal Engine's gameplay framework** with Blueprint-based gameplay systems.

C++ was primarily used where lower-level control and procedural computation were useful, while Blueprints were used extensively for gameplay logic and rapid iteration.

This hybrid approach allowed me to experiment quickly while still learning how Unreal's native systems interacted with higher-level gameplay logic.

---

## Blueprint Combat Systems

The combat system was implemented primarily through Blueprints.

The original goal was to experiment with:

* attack states;
* enemy reactions;
* timing-based combat;
* player/enemy interactions;
* animation-driven gameplay;
* and combat behavior inspired by Sekiro.

Because the project was developed while I was still learning Unreal Engine, many of these systems are experimental rather than production-ready.

---

# Technical Revival

The current goal of this repository is **not simply to restore the original project exactly as it existed**.

The original project relied on an older Unreal Engine version and has accumulated compatibility issues over time.

The revival therefore focuses on:

* identifying which original systems can be recovered;
* reconstructing systems that can no longer be directly recovered;
* updating obsolete Unreal Engine implementations;
* improving project organization;
* documenting technical decisions;
* and rebuilding important systems using modern Unreal Engine practices.

The original implementation is preserved where practical so that the evolution of the project can be understood.

---

# What I Learned

Kietemo was one of my earliest attempts at building a large-scale game system.

It taught me several lessons that were difficult to appreciate while I was developing it:

* **Scope matters.** A game can become technically impossible to maintain long before the individual systems become difficult.
* **Source control matters.** Keeping a project in a working state is as important as writing the code itself.
* **Engine versions matter.** Large engine migrations can invalidate assumptions throughout an entire project.
* **Procedural generation requires careful design.** Generating a large world is considerably easier than generating one that is interesting.
* **Architecture matters.** Rapid prototyping can create significant technical debt when a project grows.
* **Documentation matters.** Years later, undocumented systems become significantly harder to understand and recover.

This revival is therefore also an opportunity to revisit some of my earliest engineering decisions and see how I would approach the same problems today.

---

# Status

**Project status: Revival / Experimental**

The original project is no longer fully functional in its original Unreal Engine environment.

The current work focuses on selectively recovering and modernizing the most interesting systems rather than attempting to restore the entire original game at once.

### Planned / Experimental Systems

* [ ] Modernize procedural terrain generation
* [ ] Rebuild Perlin noise implementation
* [ ] Reconstruct procedural structures
* [ ] Rebuild combat systems
* [ ] Revisit enemy AI
* [ ] Reconstruct spiritual starvation system
* [ ] Experiment with dynamic world regions
* [ ] Improve project architecture
* [ ] Document technical implementations
* [ ] Produce playable prototypes of recovered systems

### Future Ideas
* [ ]  Adaptive enemy behavior: Experiment with LLM- or reinforcement-learning-assisted behavior for enemies such as Traders, Researchers, and Yokai, under strict behavioral constraints. The goal is to make enemies feel less predictable while maintaining gameplay balance and reproducibility.
* [ ] Procedurally generated Yokai: Experiment with constrained generative systems to create new Yokai archetypes, combining different behaviors, abilities, weaknesses, and visual characteristics. The intent is to reinforce the idea that not every Yokai is documented or understood, making encounters feel genuinely unknown.
* [ ] Emergent horror: Explore systems where enemy behavior, environmental conditions, and procedural generation interact to produce situations that are difficult for the player to anticipate, rather than relying entirely on scripted encounters.

---

# Keywords

**Unreal Engine · C++ · Blueprints · Procedural Generation · Perlin Noise · Game Development · Survival Horror · FPS · Samurai · Yokai · Japanese Folklore**

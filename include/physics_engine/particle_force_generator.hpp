#ifndef PARTICLE_FORCE_GENERATOR
#define PARTICLE_FORCE_GENERATOR

#include "particle.hpp"

class ParticleForceGenerator {
    public:
        virtual void update_force(Particle* particule) = 0;
};

#endif

//
// Created by faiskada on 30/10/2025.
//

#ifndef SPIT2D_ECS_H
#define SPIT2D_ECS_H

#include <format>
#include <memory>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>

using namespace boost;

namespace Engine {
    struct EntityManager {
        inline static uuids::random_generator_pure uuid_generator {};
    };
    

    struct Component {
        
    };
    
    struct Entity {
    private:
        const uuids::uuid uuid = EntityManager::uuid_generator();
        const std::string name;

        std::optional<uuids::uuid> parent_uuid;
        std::vector<uuids::uuid> children_uuids;
    };
    
}

#endif //SPIT2D_ECS_H
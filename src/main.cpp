#include <Geode/Geode.hpp>
#include <Geode/modify/CCDirector.hpp>

using namespace geode::prelude;

class $modify(MyCCDirector, CCDirector) {
    void setAnimationInterval(float interval) {
        double targetFPS = Mod::get()->getSettingValue<double>("fps-target");

        if (targetFPS > 0.0) {
            float customInterval = 1.0f / static_cast<float>(targetFPS);
            CCDirector::setAnimationInterval(customInterval);
        } else {
            CCDirector::setAnimationInterval(interval);
        }
    }
};

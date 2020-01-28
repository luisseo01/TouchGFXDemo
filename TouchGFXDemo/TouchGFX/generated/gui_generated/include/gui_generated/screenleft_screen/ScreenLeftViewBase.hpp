/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENLEFTVIEWBASE_HPP
#define SCREENLEFTVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screenleft_screen/ScreenLeftPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/AnimationTextureMapper.hpp>
#include <touchgfx/widgets/Button.hpp>

class ScreenLeftViewBase : public touchgfx::View<ScreenLeftPresenter>
{
public:
    ScreenLeftViewBase();
    virtual ~ScreenLeftViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box box1;
    touchgfx::AnimationTextureMapper textureMapper1;
    touchgfx::Button buttonRight;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ScreenLeftViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREENLEFTVIEWBASE_HPP
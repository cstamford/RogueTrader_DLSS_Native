#pragma once

namespace DLSS {

using RenderResource = void*;

struct EvaluationParams {
    RenderResource DepthIn;
    RenderResource MvecIn;
    float JitterX;
    float JitterY;
    float MVecScaleX;
    float MVecScaleY;
    bool Reset;
};

using FnOnEvaluate = void (*)(RenderResource colorIn, RenderResource colorOut, const EvaluationParams* params);
void OnEvaluate(FnOnEvaluate&& fn);

}

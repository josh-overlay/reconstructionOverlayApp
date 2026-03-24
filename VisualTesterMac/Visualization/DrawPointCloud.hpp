//
//  DrawPointCloud.hpp
//  VisualTesterMac


#import <Foundation/Foundation.h>
#import "MetalVisualizationEngine.hpp"

@interface DrawPointCloud : NSObject <MetalVisualization>

@property (nonatomic) BOOL colorByNormals;

@end

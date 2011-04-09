//
//  Copyright Mathieu Champlon 2011
//
//  Distributed under the Boost Software License, Version 1.0. (See
//  accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//

#include <turtle/mock.hpp>

namespace
{
    MOCK_CLASS( my_class )
    {
        MOCK_METHOD_EXT( my_method, 0, void( int ), my_method )
    };
    bool functor( int, int );

    void test_case()
    {
        my_class c;
        MOCK_EXPECT( c, my_method ).with( &functor );
    }
}

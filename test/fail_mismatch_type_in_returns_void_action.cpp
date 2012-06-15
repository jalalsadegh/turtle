//
// Copyright Mathieu Champlon 2011
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://turtle.sf.net for documentation.

#include <turtle/mock.hpp>

namespace
{
    MOCK_CLASS( my_class )
    {
        MOCK_METHOD_EXT( my_method, 0, void(), my_method )
    };
    void test_case()
    {
        my_class c;
        MOCK_EXPECT( c.my_method ).returns( "42" );
    }
}
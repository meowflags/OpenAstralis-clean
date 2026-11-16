// sub_1815C8620
// rva 0x015c8620  size 240  section .text  group text
// window base 0x1815c8620: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C8620(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 result; // rax
  __int64 v13; // rcx
  _QWORD v14[3]; // [rsp+0h] [rbp-28h] BYREF
  int v15; // [rsp+1Ch] [rbp-Ch]
  int v16; // [rsp+20h] [rbp-8h]
  int v17; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v14 <= *(_QWORD *)(v11 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815C8720();
  }
  else
  {
    result = *(_QWORD *)(v11 + 40);
    v13 = result + 32;
    if ( (unsigned __int64)(result + 32) > *(_QWORD *)(v11 + 32) )
    {
      return sub_1815C86AC(a1, a2, a3, a4: v13, a5, a6, a7, a8, a9, a10);
    }
    else
    {
      *(_QWORD *)(v11 + 40) = v13;
      *(_DWORD *)result = 35853144;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_BYTE *)(result + 20) = MEMORY[0x123F3C5C] & a1;
      *(_DWORD *)(result + 16) = a5;
      *(_DWORD *)(result + 12) = a6;
      *(_DWORD *)(result + 8) = (unsigned __int64)(a2 - v10) >> 3;
      *(_DWORD *)(result + 4) = (unsigned __int64)(a3 - v10) >> 3;
      if ( *(int *)(v11 + 16) <= 0 )
      {
        v14[2] = a2;
        v17 = a1;
        v16 = a6;
        v15 = a5;
        v14[1] = a3;
        return MEMORY[0x18277F280]();
      }
    }
  }
  return result;
}

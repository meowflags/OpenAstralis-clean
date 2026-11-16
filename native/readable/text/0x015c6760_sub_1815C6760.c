// sub_15C6760
// rva 0x015c6760  size 244  section .text  group text
// window base 0x1815c6760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C6760(__int64 a1, __int64 a2, int a3, float a4, float a5, float a6, __int64 a7, int a8)
{
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  float v11; // [rsp+14h] [rbp-14h]
  float v12; // [rsp+18h] [rbp-10h]
  float v13; // [rsp+1Ch] [rbp-Ch]
  int v14; // [rsp+20h] [rbp-8h]
  int v15; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
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
    return sub_15C6860();
  }
  else
  {
    result = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(result + 32) > *(_QWORD *)(v8 + 32) )
    {
      v15 = a8;
      v14 = a3;
      v13 = a6;
      v12 = a5;
      v11 = a4;
      result = sub_1EAA920(a1, a2, a3: 35848840);
      a8 = v15;
      a3 = v14;
      a6 = v13;
      a5 = v12;
      a4 = v11;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = result + 32;
      *(_DWORD *)result = 35848840;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
    }
    *(_BYTE *)(result + 17) = MEMORY[0x123f3c50]/* 0x123f3c50 */ & a8;
    *(_BYTE *)(result + 16) = MEMORY[0x123f3c50]/* 0x123f3c50 */ & a3;
    *(float *)(result + 12) = a6;
    *(float *)(result + 8) = a5;
    *(float *)(result + 4) = a4;
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v15 = a8;
      v14 = a3;
      v13 = a6;
      v12 = a5;
      v11 = a4;
      return sub_277F280();
    }
  }
  return result;
}

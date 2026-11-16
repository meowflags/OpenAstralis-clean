// sub_15C7340
// rva 0x015c7340  size 299  section .text  group text
// window base 0x1815c7340: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C7340(__int64 a1, __int64 a2, int a3, float a4, float a5, __int64 a6, int a7, int a8)
{
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  int v11; // [rsp+Ch] [rbp-1Ch]
  int v12; // [rsp+10h] [rbp-18h]
  int v13; // [rsp+14h] [rbp-14h]
  int v14; // [rsp+18h] [rbp-10h]
  int v15; // [rsp+1Ch] [rbp-Ch]
  float v16; // [rsp+20h] [rbp-8h]
  float v17; // [rsp+24h] [rbp-4h]

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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15C7480();
  }
  else
  {
    result = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(result + 32) > *(_QWORD *)(v8 + 32) )
    {
      v17 = a5;
      v16 = a4;
      v15 = a2;
      v14 = a1;
      v13 = a8;
      v12 = a7;
      v11 = a3;
      result = sub_1EAA920(a1, a2, a3: 35850016);
      a5 = v17;
      a4 = v16;
      LODWORD(a2) = v15;
      LODWORD(a1) = v14;
      a8 = v13;
      a7 = v12;
      a3 = v11;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = result + 32;
      *(_DWORD *)result = 35850016;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
    }
    *(_BYTE *)(result + 16) = MEMORY[0x123f3c54]/* 0x123f3c54 */ & a2;
    *(_BYTE *)(result + 15) = MEMORY[0x123f3c54]/* 0x123f3c54 */ & a1;
    *(_BYTE *)(result + 14) = MEMORY[0x123f3c54]/* 0x123f3c54 */ & a8;
    *(_BYTE *)(result + 13) = MEMORY[0x123f3c54]/* 0x123f3c54 */ & a7;
    *(_BYTE *)(result + 12) = MEMORY[0x123f3c54]/* 0x123f3c54 */ & a3;
    *(float *)(result + 8) = a5;
    *(float *)(result + 4) = a4;
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v17 = a5;
      v16 = a4;
      v15 = a2;
      v14 = a1;
      v13 = a8;
      v12 = a7;
      v11 = a3;
      return sub_277F280();
    }
  }
  return result;
}

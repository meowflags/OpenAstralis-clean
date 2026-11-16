// sub_15C8C00
// rva 0x015c8c00  size 509  section .text  group text
// window base 0x1815c8c00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C8C00(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 i; // rax
  __int64 result; // rax
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+10h] [rbp-28h]
  __int64 v14; // [rsp+18h] [rbp-20h]
  __int64 v15; // [rsp+20h] [rbp-18h]
  __int64 v16; // [rsp+28h] [rbp-10h]
  unsigned int v17; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    v17 = a1;
    v16 = a6;
    v15 = a5;
    v14 = a3;
    sub_1EB84E0();
  }
  else if ( (int)a1 >= 0 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    v9 = (4LL * (unsigned int)a1 + 19) & 0x7FFFFFFF8LL;
    if ( v9 >= 0x20000 || (a2 = v8 + v9, v8 + v9 > *(_QWORD *)(v7 + 32)) )
    {
      v17 = a1;
      v16 = a6;
      v15 = a5;
      v14 = a3;
      v8 = sub_1EAA840(a1, a2, a3: 34084944, a4: 34084944, a5: (unsigned int)a1);
      a1 = v17;
      a6 = v16;
      a5 = v15;
      a3 = v14;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = a2;
      *(_QWORD *)v8 = 34084944;
      *(_DWORD *)(v8 + 8) = a1;
      *(_DWORD *)(v8 + 12) = 0;
      if ( v9 - 16 >= 0x800 )
      {
        v17 = a1;
        v16 = a6;
        v15 = a5;
        v14 = a3;
        memset((void *)(v8 + 16), 0, v9 - 16);
        a1 = v17;
      }
      else
      {
        for ( i = 16; v9 > i; i += 8LL )
          *(_QWORD *)(v8 + i) = 0;
      }
    }
    result = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(result + 32) > *(_QWORD *)(v7 + 32) )
    {
      v13 = v8;
      v17 = a1;
      v16 = a6;
      v15 = a5;
      v14 = a3;
      result = sub_1EAA920(a1, a2, a3: 35854224);
      v8 = v13;
      LODWORD(a1) = v17;
      a6 = v16;
      a5 = v15;
      a3 = v14;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = result + 32;
      *(_DWORD *)result = 35854224;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
    }
    *(_DWORD *)(result + 20) = (unsigned __int64)(a6 - v6) >> 3;
    *(_DWORD *)(result + 16) = (unsigned __int64)(a5 - v6) >> 3;
    *(_DWORD *)(result + 12) = (unsigned __int64)(a3 - v6) >> 3;
    *(_DWORD *)(result + 8) = (unsigned __int64)(v8 - v6) >> 3;
    *(_DWORD *)(result + 4) = a1;
    if ( *(int *)(v7 + 16) <= 0 )
    {
      v17 = a1;
      v16 = a6;
      v15 = a5;
      v14 = a3;
      return sub_277F280();
    }
    return result;
  }
  sub_2770E80(a1, a2, a3: (unsigned int)a1);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_15C8E00();
}

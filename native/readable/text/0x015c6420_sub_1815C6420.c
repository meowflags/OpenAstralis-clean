// sub_15C6420
// rva 0x015c6420  size 256  section .text  group text
// window base 0x1815c6420: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C6420(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 i; // rdx
  __int64 v8; // rdx
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    return sub_15C6520();
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v6 + 1040) > *(_QWORD *)(v5 + 32) )
    {
      v6 = sub_1EAA840(a1, a2, a3: 34089120, a4, a5: 256);
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v6 + 1040;
      *(_QWORD *)v6 = 34089120;
      *(_DWORD *)(v6 + 8) = 256;
      *(_DWORD *)(v6 + 12) = 0;
      for ( i = 16; i < 0x410; i += 8LL )
        *(_QWORD *)(v6 + i) = 0;
    }
    v8 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v8 + 32) > *(_QWORD *)(v5 + 32) )
    {
      v11 = v6;
      v8 = sub_1EAA920(a1, a2, a3: 35848056);
      v6 = v11;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v8 + 32;
      *(_DWORD *)v8 = 35848056;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 24) = 0;
    }
    *(_DWORD *)(v8 + 4) = (unsigned __int64)(v6 - v4) >> 3;
    if ( *(int *)(v5 + 16) <= 0 )
      sub_277F280();
    return v8;
  }
}

// sub_1EC3420
// rva 0x01ec3420  size 219  section .text  group text
// window base 0x181ec3420: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC3420(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v16; // rcx
  char v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+10h] [rbp-18h]
  __int64 v19; // [rsp+18h] [rbp-10h]
  __int64 v20; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v17);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1EC3500();
  }
  else
  {
    v20 = a5;
    v19 = a3;
    v8 = sub_1EC3340(a1, a2, a3: v6 + 376614656, a4: v19, a5: v19, a6, a7: v17);
    if ( v8 == v6 )
    {
      if ( *(int *)(v7 + 16) <= 0 )
        sub_277F280();
      return v6;
    }
    else
    {
      v18 = v8;
      v11 = sub_4F636E0(a1: v9, a2: v10, a3: v8);
      if ( v11 == v6 )
      {
LABEL_4:
        if ( *(int *)(v7 + 16) <= 0 )
          sub_277F280();
        return v18;
      }
      else
      {
        v16 = v20;
        while ( v16 != v6 )
        {
          if ( v11 == v16 )
            goto LABEL_4;
          v12 = v6 + 8LL * *(unsigned int *)(v16 + 4);
          if ( *(int *)(v7 + 16) <= 0 )
          {
            v11 = sub_277F280(a1: v13, a2: v14, a3: v12);
            v16 = v12;
          }
          else
          {
            v16 = v6 + 8LL * *(unsigned int *)(v16 + 4);
          }
        }
        if ( *(int *)(v7 + 16) <= 0 )
          sub_277F280(a1: v13, a2: v14, a3: v12, a4: v18);
        return v6;
      }
    }
  }
}

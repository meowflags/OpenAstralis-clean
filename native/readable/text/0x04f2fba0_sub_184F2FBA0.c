// sub_4F2FBA0
// rva 0x04f2fba0  size 382  section .text  group text
// window base 0x184f2fba0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F2FBA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // r8d
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+10h] [rbp-18h]
  __int64 v22; // [rsp+18h] [rbp-10h]
  unsigned int v23; // [rsp+20h] [rbp-8h]
  int v24; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v6 + 8) )
  {
    v24 = a5;
    v22 = a3;
    sub_1EB84E0();
    sub_2771220(a1: v18, a2: v19, a3: (unsigned int)v17, a4: v17, a5: 26);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return ((__int64 (*)(void))sub_4F2FD20)();
  }
  else
  {
    if ( (unsigned int)(a5 - 97) < 0x1A )
    {
      v7 = (unsigned int)(a5 - 97);
    }
    else
    {
      if ( (unsigned int)(a5 - 65) >= 0x1A )
        JUMPOUT(0x309E45BC6LL);
      v7 = (unsigned int)(a5 - 65);
    }
    v8 = *(unsigned int *)(v5 + 4 * v7 + 377133196);
    v9 = v5 + 8 * v8;
    if ( (_DWORD)v8 != 0 )
    {
      if ( *(int *)(v6 + 16) <= 0 )
      {
        v21 = v5 + 8 * v8;
        v24 = a5;
        v22 = a3;
        sub_277F280();
        return v21;
      }
      return v9;
    }
    else
    {
      v21 = v5 + 8 * v8;
      v24 = a5;
      v22 = a3;
      v23 = v7;
      result = sub_4F2FD20(a1, a2, a3, a4: v7, a5: (unsigned int)(v7 + 1));
      v11 = v23;
      *(_DWORD *)(v5 + 4LL * v23 + 377133196) = (unsigned __int64)(result - v5) >> 3;
      v12 = *(_DWORD *)(v5 + 377133184);
      if ( (v12 & 2) != 0 )
      {
        if ( (v12 & 1) != 0 )
        {
          v15 = v5 + 377133184 - *(_QWORD *)(v5 + 377133176);
          v16 = (unsigned __int64)(4 * v11 + 12) >> 9;
          if ( *(_BYTE *)(v15 + v16 + 48) != 0 )
            *(_BYTE *)(v15 + v16 + 48) = 0;
        }
        else
        {
          v13 = (v5 + 377133184) & 0xFFFFFFFFFFF80000LL;
          v14 = (v5 + 377133184 - (v13 + 2112)) >> 9;
          if ( *(_BYTE *)(v13 + v14 + 56) != 0 )
            *(_BYTE *)(v13 + v14 + 56) = 0;
        }
      }
      if ( *(int *)(v6 + 16) <= 0 )
        return sub_277F280();
    }
  }
  return result;
}

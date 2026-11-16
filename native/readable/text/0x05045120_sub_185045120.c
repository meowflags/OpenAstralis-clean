// sub_5045120
// rva 0x05045120  size 285  section .text  group text
// window base 0x185045120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5045120(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r8
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  BOOL v11; // eax
  unsigned __int64 v12; // rbp
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+10h] [rbp-18h]
  __int64 v15; // [rsp+18h] [rbp-10h]
  volatile signed __int32 *v16; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_5045240();
  }
  else
  {
    v16 = (volatile signed __int32 *)a3;
    v5 = *(unsigned int *)(a3 + 120);
    result = v3 + 8 * v5;
    if ( (_DWORD)v5 != 0 )
    {
      v7 = a3;
    }
    else
    {
      v8 = *(_QWORD *)(v4 + 40);
      v9 = v8 + 16;
      if ( (unsigned __int64)(v8 + 16) > *(_QWORD *)(v4 + 32) )
      {
        v15 = result;
        v8 = sub_1EAA920(a1, a2, a3: 34167760);
      }
      else
      {
        *(_QWORD *)(v4 + 40) = v9;
        *(_DWORD *)v8 = 34167760;
        *(_DWORD *)(v8 + 4) = 0;
        *(_QWORD *)(v8 + 8) = 0;
        v15 = result;
      }
      v14 = v8;
      sub_5A322C0(a1, a2, a3: v8, a4: v9, a5: 1);
      v10 = v14;
      v7 = (unsigned __int64)v16;
      v11 = __sync_val_compare_and_swap(v16 + 30, 0, (unsigned __int64)(v14 - v3) >> 3) == 0;
      a3 = *(unsigned int *)v7;
      if ( (a3 & 2) != 0 )
      {
        v12 = (v7 & 0xFFFFFFFFFFF80000LL) + 2112;
        a3 = (v7 - v12) >> 9;
        if ( *(_BYTE *)((v7 & 0xFFFFFFFFFFF80000LL) + a3 + 0x38) != 0 )
          *(_BYTE *)((v7 & 0xFFFFFFFFFFF80000LL) + ((v7 - v12) >> 9) + 0x38) = 0;
      }
      if ( v11 )
        result = v10;
      else
        result = v3 + 8LL * *(unsigned int *)(v7 + 120);
    }
    if ( *(int *)(v4 + 16) <= 0 )
      return sub_277F280(a1, a2, a3, a4: v7);
  }
  return result;
}

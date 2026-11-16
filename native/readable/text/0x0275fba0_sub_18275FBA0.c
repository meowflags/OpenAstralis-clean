// sub_275FBA0
// rva 0x0275fba0  size 191  section .text  group text
// window base 0x18275fba0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_275FBA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  int *v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+10h] [rbp-18h]
  __int64 v15; // [rsp+18h] [rbp-10h]
  int v16; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    return sub_275FC60();
  }
  else
  {
    v7 = *(int **)(a3 + 8);
    v8 = *(unsigned int *)(a3 + 20);
    if ( (_DWORD)v8 != 0 )
      v9 = *(int *)((char *)&v7[2 * v8] + v5);
    else
      v9 = *v7;
    v10 = (unsigned int)(v9 + 128);
    if ( (unsigned int)v10 >= 0x100 )
    {
      v11 = *(_QWORD *)(v6 + 40);
      if ( (unsigned __int64)(v11 + 16) > *(_QWORD *)(v6 + 32) )
      {
        v16 = v9;
        v15 = a5;
        v14 = a3;
        v11 = sub_1EAA920(a1, a2, a3: 34086464);
        v9 = v16;
        a3 = v14;
      }
      else
      {
        *(_QWORD *)(v6 + 40) = v11 + 16;
        *(_DWORD *)v11 = 34086464;
        *(_DWORD *)(v11 + 4) = 0;
        *(_QWORD *)(v11 + 8) = 0;
      }
      *(_DWORD *)(v11 + 4) = v9;
    }
    else
    {
      v11 = v5 + 8LL * *(unsigned int *)(v5 + 4 * v10 + 376353204);
    }
    if ( *(int *)(v6 + 16) <= 0 )
      sub_277F280(a1, a2, a3);
    return v11;
  }
}

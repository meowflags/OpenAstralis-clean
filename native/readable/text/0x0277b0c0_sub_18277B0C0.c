// sub_277B0C0
// rva 0x0277b0c0  size 373  section .text  group text
// window base 0x18277b0c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277B0C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+8h] [rbp-20h]
  __int64 v22; // [rsp+10h] [rbp-18h]
  __int64 v23; // [rsp+18h] [rbp-10h]
  int v24; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
  {
    v24 = a5;
    v21 = a3;
    sub_1EB83C0();
  }
  else if ( a3 != v6 )
  {
    v8 = *(unsigned int *)(a3 + 12);
    if ( (_DWORD)v8 == 0 )
    {
LABEL_26:
      v24 = a5;
      v21 = a3;
      sub_276EFE0(a1, a2, a3, a4, a5, a6, a7: v20);
      goto LABEL_27;
    }
    v9 = *(_QWORD *)(v6 + 8 * v8 + 16);
    if ( v9 >= 1 )
    {
      v10 = v9 + 40960;
      if ( (_DWORD)a5 != 0 )
      {
        v22 = v9 + 40960;
        v23 = v9;
        v24 = a5;
        v21 = a3;
        v11 = sub_277B000(a1, a2, a3, a4: v10, a5, a6);
        v15 = v22;
        if ( *(int *)(v7 + 16) <= 0 )
          v11 = sub_277F280(a1: v13, a2: v14, a3: v12);
        if ( v11 > v15 )
          JUMPOUT(0x304EC413CLL);
        return v15;
      }
      else
      {
        v24 = 0;
        v21 = a3;
        if ( *(int *)(v7 + 16) <= 0 )
          sub_277F280(a1, a2, a3);
        return v10;
      }
    }
    v23 = v9;
    v24 = a5;
    v21 = a3;
    v17 = *(unsigned int *)(v6 + 376668584);
    if ( (_DWORD)v17 == 47076562 )
      v18 = v6 + 52423880;
    else
      v18 = v6 + 8 * v17;
    if ( v18 != v6 )
    {
      a4 = *(_DWORD *)v18 >> 3;
      if ( (_DWORD)a4 != 4260452 )
      {
LABEL_28:
        sub_276EAE0(a1, a2, a3, a4, a5, a6, a7: v20);
        JUMPOUT(0x18277B235LL);
      }
    }
    if ( v18 == v6 )
    {
LABEL_27:
      sub_276EFE0(a1, a2, a3, a4, a5, a6, a7: v20);
      goto LABEL_28;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      v18 = sub_277F280(a1, a2, a3);
    v19 = *(_QWORD *)(v18 + 8);
    if ( v19 != 0 )
      return v19 + 40960;
    else
      return 0;
  }
  v24 = a5;
  sub_276EFE0(a1, a2, a3, a4, a5, a6, a7: v20);
  goto LABEL_26;
}

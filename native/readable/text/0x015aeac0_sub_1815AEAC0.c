// sub_15AEAC0
// rva 0x015aeac0  size 1945  section .text  group text
// window base 0x1815aeac0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_BOOL8 __fastcall sub_15AEAC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  unsigned int v6; // ebx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v22; // r8d
  __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned int v26; // [rsp+1Ch] [rbp-2Ch]
  __int64 v27; // [rsp+20h] [rbp-28h]
  unsigned int v28; // [rsp+34h] [rbp-14h]
  unsigned int v29; // [rsp+44h] [rbp-4h]

  v8 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v8 == 0 )
  {
    v29 = a6;
    sub_276EFE0();
    goto LABEL_19;
  }
  *(_QWORD *)(v7 + 8 * v8 + 8) = a5;
  v9 = *(_QWORD *)(a3 + 24);
  if ( a6 != 0 )
  {
    v29 = a6;
    v10 = sub_15B2820(a1, a2, a3: v9);
  }
  else
  {
    v29 = 0;
    v10 = sub_15B3740(a1, a2, a3: v9, a4: v9, a5, a6: v7 + 8 * v8);
  }
  if ( v10 < 0 )
  {
    v12 = a3;
  }
  else
  {
    v12 = a3;
    v13 = *(_QWORD *)(a3 + 24);
    v14 = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + (int)v10 + 12LL);
    if ( (unsigned int)v14 <= 0x4F )
      __asm { jmp     r9; switch jump }
    v22 = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + (int)v10 + 12LL);
    v6 = v14 & 0xC0;
    if ( (v22 & 0xC0) != 0 )
    {
      v15 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v15 == 0 )
      {
LABEL_20:
        v26 = v22;
        v27 = v10;
        sub_276EFE0();
        goto LABEL_21;
      }
      v28 = v22 & 0xC0;
      v26 = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + (int)v10 + 12LL);
      v27 = v10;
      v16 = sub_15AF9A0(a1: v22, a2: v11, a3: v13, a4: v22, a5: *(_QWORD *)(v7 + 8 * v15 + 8), a6: v10);
      v12 = a3;
      v19 = *(unsigned int *)(a3 + 4);
      if ( (_DWORD)v19 == 0 )
      {
LABEL_21:
        sub_276EFE0();
LABEL_22:
        sub_276EFE0(a1: v17, a2: v18, a3: v12, a4: v27, a5: v26, a6: v29);
        __halt();
      }
      *(_QWORD *)(v7 + 8 * v19 + 16) = v16;
      *(_QWORD *)(v7 + 8 * v19 + 8) = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 128LL);
      v20 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v20 == 0 )
        goto LABEL_22;
      v6 = v28 >> 6;
      *(_BYTE *)(v7 + 8 * v20 + 20) = v28 >> 6 == 1;
      v10 = v27;
    }
    else
    {
      v10 = -1;
    }
  }
  if ( *(_DWORD *)(v12 + 12) == 0 )
  {
LABEL_19:
    sub_276EFE0();
    v10 = sub_28C1E80(a1: v23, a2: v24, a3: v7 + 8LL * *(unsigned int *)(v7 + 4LL * (v6 + 128) + 376353204));
    goto LABEL_20;
  }
  return v10 >= 0;
}

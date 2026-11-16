// sub_1932A9114
// rva 0x132a9114  size 372  section .text  group text
// window base 0x1932a9114: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932A9114(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // rsi
  char v7; // r14
  __int64 v8; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 *v20; // r9
  __int64 *v21; // r8
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v25; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v26[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v27; // [rsp+30h] [rbp-28h]

  v6 = (_DWORD *)(a3 + 136);
  v7 = a5;
  v8 = a3;
  if ( *(_BYTE *)(a3 + 140) != 0 )
  {
    v16 = (_QWORD *)(a3 + 48);
  }
  else
  {
    if ( *v6 == 1 )
    {
      if ( *(_DWORD *)a3 == 259
        && (v10 = MEMORY[0x337480](a1: a3, a2: v6, a3, a4: *(_QWORD *)(*(_QWORD *)(a3 + 104) + 24LL), a5: v26)) != 0
        && v10 != -1073741275 )
      {
        v12 = MEMORY[0x3374B0](a1: v8, a2: v6, a3: v11, a4: v10);
        sub_1932A85F8(a1: v14, a2: v15, a3: v13, a4: v12);
      }
      else
      {
        *v6 = 2;
        *(_DWORD *)(v8 + 132) = 0;
      }
    }
    v16 = (_QWORD *)(v8 + 48);
    v17 = *(_QWORD *)(v8 + 48);
    if ( v17 != v8 + 48 )
    {
      *(_QWORD *)(v17 + 8) = *(_QWORD *)(v8 + 56);
      **(_QWORD **)(v8 + 56) = *v16;
      *v16 = v16;
      *(_QWORD *)(v8 + 56) = v8 + 48;
    }
    sub_1932A9668(a1: v8, a2: (_DWORD)v6, a3: v8 + 64, a4: a4 + 8, a5, a6);
    *(_BYTE *)(v8 + 140) = 1;
  }
  if ( v7 != 0 || *v6 == 0 )
  {
    if ( (_QWORD *)*v16 != v16 )
    {
      *(_QWORD *)(*v16 + 8LL) = v16[1];
      *(_QWORD *)v16[1] = *v16;
      *v16 = v16;
      v16[1] = v16;
    }
    v19 = *(_QWORD *)(v8 + 104);
    v20 = *(__int64 **)v19;
    v21 = (__int64 *)(v19 + 8);
    --*(_QWORD *)(v19 + 32);
    v20 += 6;
    *(_QWORD *)(*(_QWORD *)(v19 + 8) + 8LL) = *(_QWORD *)(v19 + 16);
    v22 = *(_QWORD **)(v19 + 16);
    *v22 = *(_QWORD *)(v19 + 8);
    *(_QWORD *)(v19 + 16) = v20;
    v23 = *v20;
    *v21 = *v20;
    *(_QWORD *)(v23 + 8) = v21;
    *v20 = (__int64)v21;
    MEMORY[0x79AE0](a1: v8, a2: v6, a3: v22, a4: v8);
  }
  else if ( (_QWORD *)*v16 == v16 )
  {
    v16[1] = a4 + 32;
    v18 = *(_QWORD *)(a4 + 32);
    *v16 = v18;
    *(_QWORD *)(v18 + 8) = v16;
    *(_QWORD *)(a4 + 32) = v16;
  }
  return sub_1932C8DE0(a1: v8, a2: v6, a3, a4: (unsigned __int64)&v25 ^ v27, a5, a6);
}

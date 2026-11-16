// sub_1815B1540
// rva 0x015b1540  size 4801  section .text  group text
// window base 0x1815b1540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815B1540(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // r9d
  unsigned __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 i; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  int v30; // [rsp+8h] [rbp-80h]
  int v31; // [rsp+5Ch] [rbp-2Ch]
  unsigned __int64 v32; // [rsp+68h] [rbp-20h]

  v32 = a5 & 0xFFFFFFFFFFFFFF00LL;
  result = sub_1815AFB80(
             a1,
             a2,
             a3: *(_QWORD *)(a3 + 56),
             a4: *(unsigned int *)(a3 + 208),
             a5: (unsigned __int64)a5 >> 8,
             a6: *(_DWORD *)(a3 + 208));
  v10 = *(_QWORD *)(a3 + 48);
  v11 = *(unsigned __int8 *)(v10 + (int)result + 12);
  LODWORD(v12) = result + 2;
  if ( (unsigned int)v11 <= 0x4F )
    __asm { jmp     r9; switch jump }
  v20 = *(unsigned __int8 *)(v10 + (int)result + 12);
  v12 = (int)v12;
  v13 = v11 & 3;
  if ( (v20 & 3u) >= 2 )
  {
    if ( v13 == 2 )
    {
      v14 = *(__int16 *)(v10 + (int)v12 + 12);
    }
    else
    {
      if ( v13 != 3 )
      {
LABEL_22:
        v21 = v32;
        v22 = (unsigned int)(v20 + 128);
        if ( (unsigned int)v22 >= 0x100 )
          goto LABEL_25;
        for ( i = v6 + 8LL * *(unsigned int *)(v6 + 4 * v22 + 376353204); ; *(_DWORD *)(i + 4) = v20 )
        {
          MEMORY[0x1828C1E80](a1: v9, a2: v21, a3: i, a4: v10, a5: v12);
          MEMORY[0x1828C1E80](
            a1: v24,
            a2: v25,
            a3: v6 + 8LL * *(unsigned int *)(v6 + 4LL * (unsigned int)(v13 + 128) + 376353204));
          MEMORY[0x1828C1E80](a1: v26, a2: v27, a3: v6 + 8LL * *(unsigned int *)(v6 + 376353716));
          MEMORY[0x1828C1E80](a1: v28, a2: v29, a3: v6 + 8LL * *(unsigned int *)(v6 + 376353716));
LABEL_25:
          i = *(_QWORD *)(v7 + 40);
          if ( (unsigned __int64)(i + 16) > *(_QWORD *)(v7 + 32) )
          {
            v31 = v20;
            i = MEMORY[0x181EAA920](a1: v9, a2: v21, a3: 34086464, a4: v10, a5: v12);
            v20 = v31;
          }
          else
          {
            *(_QWORD *)(v7 + 40) = i + 16;
            *(_DWORD *)i = 34086464;
            *(_DWORD *)(i + 4) = 0;
            *(_QWORD *)(i + 8) = 0;
          }
        }
      }
      v14 = *(int *)(v10 + (int)v12 + 12);
    }
  }
  else if ( v13 != 0 )
  {
    if ( v13 != 1 )
      goto LABEL_22;
    v14 = *(char *)(v10 + (int)v12 + 12);
  }
  else
  {
    v14 = 0;
  }
  if ( v32 == a5 )
  {
    v16 = *(unsigned __int8 *)(v10 + (int)result + 12);
    *a6 = v14;
    v30 = result;
    a6[1] = sub_1815AFCA0(a1: (unsigned __int8)(v20 & 0xC0) >> 6, a2: a3, a3, a4: result, a5: result, a6: v16);
    result = sub_1815B0000(a1: v18, a2: v19, a3, a4: v17, a5: v30, a6: v16);
    a6[3] = result;
    a6[2] = -1;
  }
  else
  {
    if ( *(_BYTE *)(v10 + (int)result + 1 + 12) != 0 )
      v15 = v32 + *(unsigned __int8 *)(v10 + (int)result + 1 + 12);
    else
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v15 <= a5 )
      JUMPOUT(0x302B3D88CLL);
    *a6 = v14;
    a6[1] = 0;
    a6[3] = -1;
    a6[2] = -1;
  }
  return result;
}

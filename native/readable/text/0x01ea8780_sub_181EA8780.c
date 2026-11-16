// sub_1EA8780
// rva 0x01ea8780  size 1977  section .text  group text
// window base 0x181ea8780: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1EA8780(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, _DWORD *a5)
{
  __int64 v5; // r14
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  int v11; // r12d
  int *v12; // r10
  unsigned __int64 v13; // r11
  unsigned int v14; // ebx
  _DWORD *v15; // rdx
  unsigned int v16; // eax
  _DWORD *v17; // rdx
  unsigned int *v18; // rbx
  unsigned int *v19; // rax
  _DWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v29; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v30; // [rsp+20h] [rbp-D8h]
  unsigned int v31; // [rsp+28h] [rbp-D0h]
  unsigned int v32; // [rsp+2Ch] [rbp-CCh]
  _DWORD *v33; // [rsp+30h] [rbp-C8h]
  unsigned int v34; // [rsp+C0h] [rbp-38h]
  unsigned int *v35; // [rsp+C8h] [rbp-30h]
  unsigned __int64 v36; // [rsp+D0h] [rbp-28h]
  unsigned int *v37; // [rsp+D0h] [rbp-28h]
  int *v38; // [rsp+D8h] [rbp-20h]
  unsigned int *v39; // [rsp+E0h] [rbp-18h]
  _DWORD *v40; // [rsp+E8h] [rbp-10h]
  unsigned int v41; // [rsp+F4h] [rbp-4h]

  if ( a5 == (_DWORD *)v5 )
  {
    sub_276EFE0();
  }
  else
  {
    v33 = a5;
    v32 = *a5 >> 3;
    v6 = v32;
    v7 = (unsigned int)*(char *)(v5 + 8LL * v32 + 68);
    v41 = v7;
    v8 = *(unsigned int *)(a3 + 4);
    v31 = *(_DWORD *)(a3 + 4);
    v9 = v5 + 8LL * *(unsigned int *)(v5 + 58177844);
    v30 = v9;
    v10 = v5 + 8LL * *(unsigned int *)(v5 + 58177848);
    v29 = v10;
    if ( (_DWORD)v7 == 1 )
    {
      if ( *(__int16 *)(v5 + 8LL * v32 + 62) >= 2 )
        goto LABEL_15;
      do
      {
        sub_276EAE0();
LABEL_15:
        ;
      }
      while ( *(_DWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 8 * v6 + 16) + 16) != 5732 );
      if ( a5 == (_DWORD *)v5 )
        JUMPOUT(0x303D32D01LL);
      v17 = a5;
      if ( (_DWORD)v8 == 0 )
      {
LABEL_40:
        sub_276EFE0(a1: v10, a2: v9, a3: v17);
        __halt();
      }
      a4 = a5 + 1;
      v18 = a5 + 2;
      v39 = a5 + 2;
      v19 = a5 + 1;
      while ( v18 > v19 )
      {
        v20 = (_DWORD *)(8LL * *v19);
        if ( v20 != nullptr )
          v20 = (_DWORD *)((char *)v20 + v5);
        if ( v20 != nullptr )
        {
          if ( v9 == v5 )
            JUMPOUT(0x303D32D63LL);
          if ( v9 > (unsigned __int64)v20 )
            goto LABEL_26;
          if ( v10 == v5 )
            JUMPOUT(0x303D32DB9LL);
          if ( (unsigned __int64)v20 > v10 )
          {
LABEL_26:
            if ( (unsigned __int64)v20 >= *(_QWORD *)(v5 + 376612552)
              && (unsigned __int64)v20 < *(_QWORD *)(v5 + 376612568) )
            {
              ++v19;
            }
            else
            {
              v37 = v19;
              if ( (*v20 & 1) != 0 )
              {
                ++v19;
              }
              else
              {
                v35 = v19 + 1;
                if ( sub_1EA8F40() != 0 )
                  JUMPOUT(0x303D32DF2LL);
                a4 = v37;
                *v37 = 0;
                v19 = v35;
                v18 = v39;
                v10 = v29;
                v9 = v30;
              }
            }
          }
          else
          {
            ++v19;
          }
        }
        else
        {
          ++v19;
        }
      }
      v8 = v31;
      v7 = 1;
      v6 = v32;
      a5 = v33;
    }
    v28 = v5 + 8 * v8;
    if ( (int)v7 < 4 )
    {
      if ( a5 == (_DWORD *)v5 )
        JUMPOUT(0x303D32842LL);
      v40 = a5;
      a4 = (unsigned int *)*(int *)(v5 + 8 * v6 + 56);
      v11 = *(_DWORD *)(v5 + 4LL * (_QWORD)a4);
      if ( v11 != 0 )
      {
        a4 = (unsigned int *)(v5 + 4LL * (_QWORD)a4);
        v12 = (int *)(a4 + 1);
        v13 = (unsigned __int64)&a4[2 * v11 + 1];
        v36 = v13;
        v14 = v31;
        v15 = a5;
        while ( v13 > (unsigned __int64)v12 )
        {
          v16 = *v12;
          v34 = v12[1];
          v38 = v12 + 2;
          if ( v14 == 0 )
            goto LABEL_39;
          sub_1EA9F00(a1: 4, a2: a5, a3: v28, a4: v34, a5: (char *)v15 + *v12, a6: 1);
          v12 = v38;
          v13 = v36;
          v15 = v40;
          v14 = v31;
          a5 = v33;
        }
        v7 = v41;
      }
    }
    if ( (unsigned int)v7 <= 6 )
      __asm { jmp     r8; switch jump }
  }
  v16 = sub_28C1C40(a1: v10, a2: v9, a3: v5 + 368272040, a4, a5);
LABEL_39:
  sub_276EFE0(a1: v10, a2: v16, a3: v15, a4: v34);
  sub_276EFE0();
  v21 = sub_276EAE0();
  sub_276EFE0(a1: v21 + v23, a2: v22 - 2, a3: v23, a4: *(unsigned __int8 *)(v21 + v22 - 1));
  sub_276EFE0();
  sub_28C1C40(a1: v24, a2: v25, a3: v5 + 370861008);
  sub_28C1C40(a1: v26, a2: v27, a3: v5 + 367049616);
  goto LABEL_40;
}

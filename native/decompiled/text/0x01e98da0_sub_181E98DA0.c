// sub_181E98DA0
// rva 0x01e98da0  size 462  section .text  group text
// window base 0x181e98da0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_181E98DA0(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // [rsp+0h] [rbp-68h] BYREF
  __int64 v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+28h] [rbp-40h]
  _QWORD *v23; // [rsp+30h] [rbp-38h]
  int v24; // [rsp+3Ch] [rbp-2Ch]
  _QWORD *v25; // [rsp+40h] [rbp-28h]
  __int64 v26; // [rsp+48h] [rbp-20h]
  _QWORD *v27; // [rsp+50h] [rbp-18h]
  int v28; // [rsp+58h] [rbp-10h]
  unsigned int v29; // [rsp+5Ch] [rbp-Ch]
  _QWORD *v30; // [rsp+60h] [rbp-8h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB83C0(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v20);
    JUMPOUT(0x181E98F6ELL);
  }
  v22 = a3;
  v30 = a5;
  v21 = a6;
  v29 = a1;
  if ( a5 != nullptr )
  {
    v8 = (__int64)a5 + *a5;
    v27 = (_QWORD *)((char *)a5 + a5[4]);
    v26 = v8;
    v25 = a5 + 264;
    sub_181E98AE0(a1: (__int64)v27, a2: v8, a3, a4: 1, (__int64)a5, a6: (__int64)(a5 + 264), a7: v20, a8: a6, a9: a1);
    v9 = v30[2];
    if ( v9 != 0 )
      v10 = (_QWORD *)((char *)v30 + v9);
    else
      v10 = nullptr;
    v11 = 1;
    a1 = v29;
    v12 = v21;
    v13 = v22;
    while ( 1 )
    {
      v24 = v11;
      if ( v10 == nullptr )
      {
        v28 = v11;
        goto LABEL_12;
      }
      if ( v11 >= 0x10000 )
        break;
      v14 = (__int64)v10 + *v10;
      v25 = (_QWORD *)((char *)v10 + v10[4]);
      v26 = v14;
      v27 = v10 + 264;
      v23 = v10;
      sub_181E98AE0(
        a1: (__int64)v25,
        a2: v14,
        a3: v13,
        a4: 1,
        a5: (__int64)v10,
        a6: (__int64)(v10 + 264),
        a7: v20,
        a8: v12,
        a9: a1);
      v15 = v23[2];
      if ( v15 != 0 )
      {
        v10 = (_QWORD *)((char *)v23 + v15);
        a1 = v29;
        v12 = v21;
        v13 = v22;
        v11 = v24 + 1;
      }
      else
      {
        v11 = v24 + 1;
        v10 = nullptr;
        a1 = v29;
        v12 = v21;
        v13 = v22;
      }
    }
    v28 = v11;
  }
  else
  {
    v28 = 0;
    v10 = nullptr;
  }
LABEL_12:
  if ( v10 != nullptr )
  {
    v23 = v10;
    v16 = MEMORY[0x1820841E0](a1, a2, a3: v22);
    MEMORY[0x182084840](a1: v18, a2: v19, a3: v16, a4: v17, a5: v6 + 372583328);
  }
  else
  {
    v23 = nullptr;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280](a1, a2, a3: v23);
}

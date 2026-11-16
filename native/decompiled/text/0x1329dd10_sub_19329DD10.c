// sub_19329DD10
// rva 0x1329dd10  size 1647  section .text  group text
// window base 0x19329dd10: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_19329DD10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // r8
  __int64 v43; // r9
  int v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h]
  int v47; // [rsp+70h] [rbp-90h]
  int v48; // [rsp+74h] [rbp-8Ch] BYREF
  int v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h]
  int v51; // [rsp+88h] [rbp-78h]
  _BYTE v52[4]; // [rsp+8Ch] [rbp-74h] BYREF
  int v53; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v54; // [rsp+D4h] [rbp-2Ch]
  __int16 v55; // [rsp+16Ah] [rbp+6Ah]
  int v56; // [rsp+180h] [rbp+80h] BYREF
  __int16 v57; // [rsp+184h] [rbp+84h]
  _WORD v58[128]; // [rsp+22Ch] [rbp+12Ch] BYREF
  char v59; // [rsp+32Ch] [rbp+22Ch]
  _BYTE v60[256]; // [rsp+330h] [rbp+230h] BYREF
  _BYTE v61[256]; // [rsp+430h] [rbp+330h] BYREF
  __int64 v63; // [rsp+868h] [rbp+768h]

  v63 = v7;
  v46 = 0;
  if ( (unsigned int)MEMORY[0x795B0](a1, a2: a4, a3, a4: &v56) == -1 )
    goto LABEL_49;
  if ( v58[0] != 0 )
  {
    if ( v59 != 0 )
      sub_19329DC50(a1: v9, a2: v10, a3: v10, a4: v56);
    else
      sub_1932CA215(a1: v9, a2: v10, a3: v58, a4: v10, a5: 256);
LABEL_36:
    JUMPOUT(0x19329E353LL);
  }
  if ( v57 == 0 )
  {
    if ( (unsigned int)MEMORY[0x79010](a1: v9, a2: v10, a3: 533456, a4: -2147483646, a5: 0, a6: 131097) == 0 )
    {
      v47 = 4;
      if ( (unsigned int)MEMORY[0x79038](a1: v11, a2: v12, a3: 533512, a4: v46, a5: 0, a6: v52) == 0 )
      {
        if ( v49 == 1 )
        {
          sub_19329DC50(a1: v13, a2: v14, a3: v14, a4: v56);
          MEMORY[0x791C8](a1: v16, a2: v17, a3: v15, a4: v46);
          goto LABEL_36;
        }
        v47 = 256;
        if ( (unsigned int)MEMORY[0x79038](a1: v13, a2: v14, a3: 533544, a4: v46, a5: 0, a6: v52) == 0 )
          goto LABEL_12;
      }
    }
    goto LABEL_49;
  }
  v50 = 0;
  if ( (unsigned int)MEMORY[0x795B8](a1: v9, a2: v10, a3: v8, a4: &v53) == -1 )
    goto LABEL_49;
  if ( (unsigned int)MEMORY[0x79010](a1: v21, a2: v22, a3: 533456, a4: -2147483646, a5: 0, a6: 131097) == 0 )
  {
    v47 = 4;
    if ( (unsigned int)MEMORY[0x79038](a1: v23, a2: v24, a3: 533512, a4: v46, a5: 0, a6: &v45) == 0
      && v49 == 1
      && v55 != 0 )
    {
      MEMORY[0x791C8](a1: v26, a2: v27, a3: v25, a4: v46);
      sub_19329DC50(a1: v28, a2: v29, a3: v29, a4: v53);
      goto LABEL_36;
    }
    if ( v54 == 0 )
    {
      v30 = v46;
      v47 = 512;
      v45 = 0;
      if ( (unsigned int)MEMORY[0x79040](a1: v26, a2: v27, a3: MEMORY[0x336578], a4: v46, a5: 0, a6: &v45) != 0
        || v45 != 1 )
      {
        v48 = 256;
        if ( (unsigned int)MEMORY[0x79038](a1: v26, a2: v27, a3: MEMORY[0x336580], a4: v30, a5: 0, a6: &v45) != 0
          || v45 != 1
          || (int)MEMORY[0x796D8](a1: v31, a2: v32, a3: 8, a4: 0, a5: v61, a6: 0xFFFFFFFFLL) <= 0 )
        {
          goto LABEL_49;
        }
      }
    }
    MEMORY[0x791C8](a1: v26, a2: v27, a3: v25, a4: v46);
  }
  if ( (unsigned int)MEMORY[0x79010](a1: v23, a2: v24, a3: 533560, a4: -2147483646, a5: 0, a6: 131097) != 0
    && (unsigned int)MEMORY[0x79010](a1: v33, a2: v34, a3: 533616, a4: -2147483646, a5: 0, a6: 131097) != 0 )
  {
    JUMPOUT(0x19329E351LL);
  }
  if ( (unsigned int)MEMORY[0x79030](a1: v33, a2: v34, a3: 0, a4: v46, a5: 0, a6: 0) != 0 )
    goto LABEL_49;
  v19 = 0;
  if ( v51 == 0 )
  {
LABEL_12:
    MEMORY[0x791C8](a1: v19, a2: v20, a3: v18, a4: v46);
    goto LABEL_36;
  }
  v48 = 256;
  if ( (unsigned int)MEMORY[0x79008](a1: 0, a2: v20, a3: 0, a4: v46, a5: v60, a6: &v48) != 0
    || (unsigned int)MEMORY[0x79010](a1: v35, a2: v36, a3: v60, a4: v46, a5: 0, a6: 131097) != 0 )
  {
LABEL_49:
    JUMPOUT(0x19329E341LL);
  }
  v48 = 256;
  v45 = 0;
  if ( (unsigned int)MEMORY[0x79040](a1: v37, a2: v38, a3: MEMORY[0x336588], a4: v50, a5: 0, a6: &v45) == 0 && v45 == 1 )
    JUMPOUT(0x19329E220LL);
  return sub_19329E1AE(a1: v40, a2: v41, a3: MEMORY[0x336590], a4: v39, a5: v42, a6: v43, a7, a8: v63, a9: a2, a10: a1);
}
